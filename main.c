#include <stdio.h>
#include <stdlib.h>

#include <libintl.h>
#include <locale.h>

// Define the common macro substitution for gettext.
#define _(STRING) gettext(STRING)

int
main(int argc, char* argv[])
{
    // Setup the i18n parameters.
    setlocale (LC_ALL, "");
    bindtextdomain ("hello", getenv("PWD"));
    textdomain ("hello");

    // Translate the string and print it.
    printf(_("Hello world\n"));

    return EXIT_SUCCESS;
}
