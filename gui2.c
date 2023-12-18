#include <gtk/gtk.h>

// Structure to store person information
typedef struct Person {
    char name[50];
    char gender;
    int age;
} Person;

int n; // Number of people
GtkWidget *label_cost; // Global variable to store label
Person *persons; // Array to store person details

// Callback function for calculate button
void on_calculate_clicked(GtkWidget *button, gpointer data) {
    // Read information for each person
    for (int i = 0; i < n; i++) {
        GtkWidget *dialog = gtk_dialog_new_with_buttons(
            "Person Information",
            GTK_WINDOW(data),
            GTK_DIALOG_MODAL,
            GTK_STOCK_OK,
            GTK_RESPONSE_OK,
            GTK_STOCK_CANCEL,
            GTK_RESPONSE_CANCEL,
            NULL);

        GtkWidget *content_area = gtk_dialog_get_content_area(GTK_DIALOG(dialog));

        GtkWidget *entry_name = gtk_entry_new();
        GtkWidget *gender_male = gtk_radio_button_new_with_label(NULL, "Male");
        GtkWidget *gender_female = gtk_radio_button_new_with_label_from_widget(GTK_RADIO_BUTTON(gender_male), "Female");
        GtkWidget *age_spin = gtk_spin_button_new_with_range(0, 120, 1);

        gtk_container_add(GTK_CONTAINER(content_area), gtk_label_new(g_strdup_printf("Person %d Name:", i + 1)));
        gtk_container_add(GTK_CONTAINER(content_area), entry_name);
        gtk_container_add(GTK_CONTAINER(content_area), gtk_label_new("Gender:"));
        gtk_container_add(GTK_CONTAINER(content_area), gender_male);
        gtk_container_add(GTK_CONTAINER(content_area), gender_female);
        gtk_container_add(GTK_CONTAINER(content_area), gtk_label_new("Age:"));
        gtk_container_add(GTK_CONTAINER(content_area), age_spin);

        gtk_widget_show_all(dialog);

        if (gtk_dialog_run(GTK_DIALOG(dialog)) == GTK_RESPONSE_OK) {
            strcpy(persons[i].name, gtk_entry_get_text(GTK_ENTRY(entry_name)));
            if (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(gender_male))) {
                persons[i].gender = 'M';
            }
            else {
                persons[i].gender = 'F';
            }
            persons[i].age = gtk_spin_button_get_value(GTK_SPIN_BUTTON(age_spin));
        }

        gtk_widget_destroy(dialog);
    }

    // Calculate total cost for each person and accumulate
    int total_cost = 0;
    for (int i = 0; i < n; i++) {
        if (persons[i].gender == 'M') {
            if (persons[i].age < 18) {
                total_cost += 500;
            }
            else if (persons[i].age < 60) {
                total_cost += 1000;
            }
        }
        else if (persons[i].gender == 'F') {
            if (persons[i].age < 18) {
                total_cost += 350;
            }
            else if (persons[i].age < 60) {
                total_cost += 750;
            }
        }
    }

    // Show total cost in the label
    gtk_label_set_text(GTK_LABEL(label_cost), g_strdup_printf("Total Cost: %d", total_cost));
}

void on_destroy(GtkWidget *widget, gpointer data) {
    free(persons); // Free allocated memory for persons
    gtk_main_quit();
}

int main(int argc, char *argv[]) {
    GtkWidget *window, *button_calculate;

    // Initialize GTK
    gtk_init(&argc, &argv);

    // Create main window
    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "Ticket & Food Cost Calculator");

    // Get number of people
    GtkWidget *dialog = gtk_dialog_new_with_buttons(
        "Number of People",
        GTK_WINDOW(window),
        GTK_DIALOG_MODAL,
        GTK_STOCK_OK,
        GTK_RESPONSE_OK,
        GTK_STOCK_CANCEL,
        GTK_RESPONSE_CANCEL,
        NULL);

    GtkWidget *content_area = gtk_dialog_get_content_area(GTK_DIALOG(dialog));
    GtkWidget *entry_n = gtk_entry_new();
    gtk_container_add(GTK_CONTAINER(content_area), gtk_label_new("Number of people:"));
    gtk_container_add(GTK_CONTAINER(content_area), entry_n);

    gtk_widget_show_all(dialog);

    if (gtk_dialog_run(GTK_DIALOG(dialog)) == GTK_RESPONSE_OK) {
        n = atoi(gtk_entry_get_text(GTK_ENTRY(entry_n)));
        persons = malloc(sizeof(Person) * n); // Allocate memory for persons
    }
    else {
        gtk_widget_destroy(dialog);
        return 0; // Exit if the user cancels the input
    }

    gtk_widget_destroy(dialog);

    // Create button for calculating cost
    button_calculate = gtk_button_new_with_label("Calculate Cost");
    gtk_container_add(GTK_CONTAINER(window), button_calculate);

    // Create label for displaying total cost
    label_cost = gtk_label_new("Total Cost: 0");
    gtk_container_add(GTK_CONTAINER(window), label_cost);

    // Connect button click signal to on_calculate_clicked function
    g_signal_connect(button_calculate, "clicked", G_CALLBACK(on_calculate_clicked), window);

    // Connect destroy signal to exit program
    g_signal_connect(window, "destroy", G_CALLBACK(on_destroy), NULL);

    // Show all widgets and run GTK main loop
    gtk_widget_show_all(window);
    gtk_main();

    return 0;
}
