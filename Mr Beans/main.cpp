#include <iostream>
#include <cmath>
using namespace std;
int tax(int);
int taxamount(int);
int main()
{
    // Displaying restaurant name
    cout << "\033[5m   \033[32m                                                                     ********************" << endl;
    cout << "                                                                        *                  *" << endl;
    cout << "                                                                        *  MR BEAN'S CAFE  *" << endl;
    cout << "                                                                        *                  *" << endl;
    cout << "                                                                        ******************** \033[0m" << endl << endl;

    cout << "\033[33m                                                                     \"QUALITY SERVICE ASSURED\" \033[0m" << endl << endl;

    // main menu heading
    cout << "   ---------------------------------------------------------------------------------------------------------------------------------------------------------------- " << endl;
    cout << "   |                                                                                                                                                                " << endl;
    cout << "   |\033[31m \033[1m                                                            *       *  *******  *       *  *     *                                                           | \n";
    cout << "   |                                                             * *   * *  *        * *     *  *     *                                                           | \n";
    cout << "   |                                                             *  * *  *  *        *  *    *  *     *                                                           | \n";
    cout << "   |                                                             *   *   *  ******   *   *   *  *     *                                                           | \n";
    cout << "   |                                                             *       *  *        *    *  *  *     *                                                           | \n";
    cout << "   |                                                             *       *  *        *     * *  *     *                                                           | \n";
    cout << "   |                                                             *       *  *******  *       *  *******                                                           | \n \033[0m";
    cout << "  |                                                                                                                                                              | " << endl;
    // displaying menu
    cout << "   |\033[35m               ------------------                 ------------------                 ------------------                 ----------------    \033[0m                  |" << endl;
    cout << "   |\033[35m               |     ENTREES    |                 | Special Deals  |                 |    Desserts    |                 |   Beverages  | \033[0m                     |" << endl;
    cout << "   |\033[35m               ------------------                 ------------------                 ------------------                 ----------------   \033[0m                   |" << endl;
    cout << "   |\033[33m         1. Biryani                       6. Lunch Special: Biryani + Drink         8. Gulab Jamun                     11. Tea                                |" << endl;
    cout << "   |         2. Seekh Kebab                   7. Dinner Special: Nihari + Naan          9. Kheer                           12. Juice                              |" << endl;
    cout << "   |         3. Nihari                                                                  10. Jalebi                         13. Falooda                            |" << endl;
    cout << "   |         4. Haleem                                                                                                                                            |" << endl;
    cout << "   |         5. Chicken Karahi                                                                                                                                    \033[0m|" << endl;
    cout << "   |                                                                                                                                                              | " << endl;
    cout << "   ---------------------------------------------------------------------------------------------------------------------------------------------------------------- " << endl;
    cout << endl;
    int bill[14] = { 0 };
label00://label for choice from the main menu
    cout << "                                                                           Enter your choice here   " << endl;
    cout << "\033[96m                                                                              (Number Only): \033[0m";// asking for coustomer's choice
    int choice = 0;
    cin >> choice;
    if (choice == 1)
    {
        cout << "------------------------" << endl;
        cout << "|\033[35m        BIRYANI       \033[0m|" << endl;
        cout << "------------------------" << endl;
        cout << "|\033[33m 1. Chicken Biryani   \033[0m| |\033[32m    Price: Rs350        \033[0m|" << endl;
        cout << "------------------------" << endl;
        cout << "|\033[33m 2. Mutton Biryani    \033[0m| |\033[32m    Price: Rs400        \033[0m|" << endl;
        cout << "------------------------" << endl;
        cout << "|\033[33m 3. Beef Biryani      \033[0m| |\033[32m    Price: Rs450        \033[0m|" << endl;
        cout << "------------------------" << endl;
        cout << "|\033[33m 4. Veg Biryani       \033[0m| |\033[32m    Price: Rs300        \033[0m|" << endl;
        cout << "------------------------" << endl;
        cout << "|\033[33m 5. Sindhi Biryani    \033[0m| |\033[32m    Price: Rs350        \033[0m|" << endl;
        cout << "------------------------" << endl;
        int arr[6] = { 0,350,400,450,300,350 };
        int sum = 0;
    label11:
        int c1;
        cout << endl << "ENTER YOUR CHOICE: ";
        if (!(cin >> c1)) {
            cout << "\033[31  invalid choice... please enter again \033[0m" << endl;
            cin.clear();


            while (cin.get() != '\n')

                continue;
            goto label11;
        }
        if (c1 < 0 || c1 > 5)
        {
            cout << "\033[31m Invalid choice please enter again\033[0m" << endl;
            goto label11;

        }
        {
            sum += arr[c1];
            cout << "\033[32m TOTAL = \033[0m" << sum << endl;
            bill[1] = sum;
        label13:
            cout << " WOULD YOU LIKE TO ORDER ANOTHER BIRIYANI ....\033[96m (Y/N) :  \033[0m";
            char b;
            cin >> b;
            if (b == 'n' || b == 'N')
            {
                //do nothing
            }
            else if (b == 'y' || b == 'Y') {
                cout << "SURELY......" << endl;
                goto label11;
            }
            else {
                cout << "\033[31m Invalid choice! \033[0m" << endl;
                goto label13;
            }

        label14:
            cout << " WOULD YOU LIKE TO ORDER SOMETHING ELSE \033[96m(Y/N): \033[0m";
            char f;
            cin >> f;

            if (f == 'n' || f == 'N') {
                cout << "THANKS FOR VISITING MR. BEAN'S CAFE" << endl;
                cout << "Hope to see you soon.........." << endl;
            }
            else if (f == 'y' || f == 'Y') {
                cout << "SURELY......" << endl;
                goto label00;
            }
            else {
                cout << "\033[31m Invalid choice! \033[0m" << endl;
                goto label14;
            }

        }

    }
    if (choice == 2)
    {
        cout << "------------------------" << endl;
        cout << "|\033[35m     SEEKH KEBAB      \033[0m|" << endl;
        cout << "------------------------" << endl;
        cout << "|\033[33m 1. Regular Seekh     \033[0m| |\033[32m    Price: Rs200        \033[0m|" << endl;
        cout << "------------------------" << endl;
        cout << "|\033[33m 2. Reshmi Kebab      \033[0m| |\033[32m    Price: Rs250        \033[0m|" << endl;
        cout << "------------------------" << endl;
        cout << "|\033[33m 3. Cheese Seekh      \033[0m| |\033[32m    Price: Rs300        \033[0m|" << endl;
        cout << "------------------------" << endl;
        cout << "|\033[33m 4. Afghani Seekh     \033[0m| |\033[32m    Price: Rs350        \033[0m|" << endl;
        cout << "------------------------" << endl;
        cout << "|\033[33m 5. Malai Seekh       \033[0m| |\033[32m    Price: Rs300        \033[0m|" << endl;
        cout << "------------------------" << endl;
        int arr[6] = { 0,200,250,300,350,300 };
        int sum = 0;
    label21:
        cout << "ENTER YOUR CHOICE = ";
        int c1;
        if (!(cin >> c1)) {
            cout << "\033[31  invalid choice... please enter again \033[0m" << endl;
            cin.clear();


            while (cin.get() != '\n')

                continue;
            goto label21;
        }
        if (0 >= c1 || c1 > 5)
        {
            cout << "\033[31m invalid choice please enter again \033[0m" << endl;
            goto label21;
        }
        sum += arr[c1];
        cout << "\033[32m TOTAL = \033[0m" << sum << endl;
        bill[2] = sum;
    label23:
        cout << " WOULD YOU LIKE TO ORDER ANOTHER KABAB .... \033[96m(Y/N): \033[0m";
        char b;
        cin >> b;
        if (b == 'n' || b == 'N')
        {
            //do nothing
        }
        else if (b == 'y' || b == 'Y') {
            cout << "SURELY......" << endl;
            goto label21;
        }
        else {
            cout << "\033[31m Invalid choice!\033[0m" << endl;
            goto label23;
        }

    label24:
        cout << " WOULD YOU LIKE TO ORDER SOMETHING ELSE \033[96m(Y/N): \033[0m";
        char f;
        cin >> f;

        if (f == 'n' || f == 'N') {
            cout << "THANKS FOR VISITING MR. BEAN'S CAFE" << endl;
            cout << "Hope to see you soon.........." << endl;
        }
        else if (f == 'y' || f == 'Y') {
            cout << "SURELY......" << endl;
            goto label00;
        }
        else {
            cout << "\033[31m Invalid choice! \033[0m" << endl;
            goto label24;
        }
    }
    if (choice == 3)
    {
        cout << "------------------------" << endl;
        cout << "|\033[35m        NIHARI        \033[0m|" << endl;
        cout << "------------------------" << endl;
        cout << "|\033[33m 1. Beef Nihari       \033[0m| |\033[32m    Price: Rs350        \033[0m|" << endl;
        cout << "------------------------" << endl;
        cout << "|\033[33m 2. Mutton Nihari     \033[0m| |\033[32m    Price: Rs400        \033[0m|" << endl;
        cout << "------------------------" << endl;
        cout << "|\033[33m 3. Chicken Nihari    \033[0m| |\033[32m    Price: Rs300        \033[0m|" << endl;
        cout << "------------------------" << endl;
        cout << "|\033[33m 4. Special Nihari    \033[0m| |\033[32m    Price: Rs450        \033[0m|" << endl;
        cout << "------------------------" << endl;
        cout << "|\033[33m 5. Paya Nihari       \033[0m| |\033[32m    Price: Rs380        \033[0m|" << endl;
        cout << "------------------------" << endl;
        int arr[6] = { 0,350,400,300,450,380 };
        int sum = 0;
    label31:
        cout << "ENTER YOUR CHOICE = ";
        int c1;
        if (!(cin >> c1)) {
            cout << "\033[31  invalid choice... please enter again \033[0m" << endl;
            cin.clear();


            while (cin.get() != '\n')

                continue;
            goto label31;
        }

        if (0 >= c1 || c1 > 5)
        {
            cout << "\033[31m invalid choice please enter again \033[0m" << endl;
            goto label31;
        }
        sum += arr[c1];
        cout << "\033[32m TOTAL = \033[0m" << sum << endl;
        bill[3] = sum;
    label33:
        cout << " WOULD YOU LIKE TO ORDER ANOTHER NIHARI .... \033[96m(Y/N): \033[0m";
        char b;
        cin >> b;
        if (b == 'n' || b == 'N')
        {
            //do nothing
        }
        else if (b == 'y' || b == 'Y') {
            cout << "SURELY......" << endl;
            goto label31;
        }
        else {
            cout << "\033[31m   Invalid choice! \033[0m" << endl;
            goto label33;
        }

    label34:
        cout << " WOULD YOU LIKE TO ORDER SOMETHING ELSE \033[96m(Y/N): \033[0m";
        char f;
        cin >> f;

        if (f == 'n' || f == 'N') {
            cout << "THANKS FOR VISITING MR. BEAN'S CAFE" << endl;
            cout << "Hope to see you soon.........." << endl;
        }
        else if (f == 'y' || f == 'Y') {
            cout << "SURELY......" << endl;
            goto label00;
        }
        else {
            cout << "\033[31m Invalid choice! \033[0m" << endl;
            goto label34;
        }
    }
    if (choice == 4)
    {
        cout << "------------------------" << endl;
        cout << "|\033[35m        HALEEM        \033[0m|" << endl;
        cout << "------------------------" << endl;
        cout << "|\033[33m 1. Classic Haleem    \033[0m| |\033[32m    Price: Rs150        \033[0m|" << endl;
        cout << "------------------------" << endl;
        cout << "|\033[33m 2. Hyderabadi Haleem \033[0m| |\033[32m    Price: Rs200        \033[0m|" << endl;
        cout << "------------------------" << endl;
        cout << "|\033[33m 3. Mutton Haleem     \033[0m| |\033[32m    Price: Rs250        \033[0m|" << endl;
        cout << "------------------------" << endl;
        cout << "|\033[33m 4. Beef Haleem       \033[0m| |\033[32m    Price: Rs200        \033[0m|" << endl;
        cout << "------------------------" << endl;
        cout << "|\033[33m 5. Special Haleem    \033[0m| |\033[32m    Price: Rs300        \033[0m|" << endl;
        cout << "------------------------" << endl;

        int arr[6] = { 0,150,200,250,200,300 };
        int sum = 0;
    label41:
        cout << "ENTER YOUR CHOICE = ";
        int c1;
        if (!(cin >> c1)) {
            cout << "\033[31  invalid choice... please enter again \033[0m" << endl;
            cin.clear();


            while (cin.get() != '\n')

                continue;
            goto label41;
        }
        if (0 >= c1 || c1 > 5)
        {
            cout << "\033[31m   invalid choice please enter again \033[0m" << endl;
            goto label41;
        }
        sum += arr[c1];
        cout << "\033[32m TOTAL = \033[0m" << sum << endl;
        bill[4] = sum;
    label43:
        cout << " WOULD YOU LIKE TO ORDER ANOTHER  HALEEM .... \033[96m(Y/N): \033[0m";
        char b;
        cin >> b;
        if (b == 'n' || b == 'N')
        {
            //do nothing
        }
        else if (b == 'y' || b == 'Y') {
            cout << "SURELY......" << endl;
            goto label41;
        }
        else {
            cout << "\033[31m  Invalid choice! \033[0m" << endl;
            goto label43;
        }

    label44:
        cout << " WOULD YOU LIKE TO ORDER SOMETHING ELSE \033[96m(Y/N): \033[0m";
        char f;
        cin >> f;

        if (f == 'n' || f == 'N') {
            cout << "THANKS FOR VISITING MR. BEAN'S CAFE" << endl;
            cout << "Hope to see you soon.........." << endl;
        }
        else if (f == 'y' || f == 'Y') {
            cout << "SURELY......" << endl;
            goto label00;
        }
        else {
            cout << "\033[31m Invalid choice! \033[0m" << endl;
            goto label44;
        }
    }
    if (choice == 5)
    {
        cout << "------------------------" << endl;
        cout << "|\033[35m        KARAHI        \033[0m|" << endl;
        cout << "------------------------" << endl;
        cout << "|\033[33m 1. Chicken Karhai    \033[0m| |\033[32m    Price: Rs350        \033[0m|" << endl;
        cout << "------------------------" << endl;
        cout << "|\033[33m 2. Mutton Karhai     \033[0m| |\033[32m    Price: Rs400        \033[0m|" << endl;
        cout << "------------------------" << endl;
        cout << "|\033[33m 3. Beef Karhai       \033[0m| |\033[32m    Price: Rs450        \033[0m|" << endl;
        cout << "------------------------" << endl;
        cout << "|\033[33m 4. White Karhai      \033[0m| |\033[32m    Price: Rs500        \033[0m|" << endl;
        cout << "------------------------" << endl;
        cout << "|\033[33m 5. Lamb Karhai       \033[0m| |\033[32m    Price: Rs400        \033[0m|" << endl;
        cout << "------------------------" << endl;
        int arr[6] = { 0,350,400,450,500,400 };
        int sum = 0;
    label51:
        cout << "ENTER YOUR CHOICE = ";
        int c1;

        if (!(cin >> c1)) {
            cout << "\033[31 invalid choice... please enter again \033[0m" << endl;
            cin.clear();


            while (cin.get() != '\n')

                continue;
            goto label51;
        }
        if (0 >= c1 || c1 > 5)
        {
            cout << "\033[31m  invalid choice please enter again \033[0m" << endl;
            goto label51;
        }
        sum += arr[c1];
        cout << "\033[32m TOTAL = \033[0m" << sum << endl;
        bill[5] = sum;
    label53:
        cout << " WOULD YOU LIKE TO ORDER ANOTHER KARHAI .... \033[96m(Y/N): \033[0m";
        char b;
        cin >> b;
        if (b == 'n' || b == 'N')
        {
            //do nothing
        }
        else if (b == 'y' || b == 'Y') {
            cout << "SURELY......" << endl;
            goto label51;
        }
        else {
            cout << "\033[31m  Invalid choice! \033[0m " << endl;
            goto label53;
        }

    label54:
        cout << " WOULD YOU LIKE TO ORDER SOMETHING ELSE \033[96m(Y/N): \033[0m";
        char f;
        cin >> f;

        if (f == 'n' || f == 'N') {
            cout << "THANKS FOR VISITING MR. BEAN'S CAFE" << endl;
            cout << "Hope to see you soon.........." << endl;
        }
        else if (f == 'y' || f == 'Y') {
            cout << "SURELY......" << endl;
            goto label00;
        }
        else {
            cout << "\033[31m  Invalid choice! \033[0m" << endl;
            goto label54;
        }

    }
    if (choice == 6)
    {
        cout << " -------------------------------" << endl;
        cout << " |\033[35m    BIRYANI AND DRINK DEAL   \033[0m| |\033[32m Price : Rs 600      \033[0m|" << endl;
        cout << " -------------------------------" << endl;
        int sum = 600;
        cout << "\033[32m TOTAL = \033[0m" << sum << endl;
        bill[6] = sum;
    label64:
        cout << " WOULD YOU LIKE TO ORDER SOMETHING ELSE \033[96m(Y/N): \033[0m";
        char f;
        cin >> f;

        if (f == 'n' || f == 'N') {
            cout << "THANKS FOR VISITING MR. BEAN'S CAFE" << endl;
            cout << "Hope to see you soon.........." << endl;
        }
        else if (f == 'y' || f == 'Y') {
            cout << "SURELY......" << endl;
            goto label00;
        }
        else {
            cout << " \033[31m Invalid choice! \033[0m" << endl;
            goto label64;
        }


    }
    if (choice == 7)
    {
        cout << " -------------------------------" << endl;
        cout << " |\033[35m     NIHARI AND NAAN DEAL    \033[0m| | Price : Rs 1000      |" << endl;
        cout << " -------------------------------" << endl;
        int sum = 1000;
        cout << "\033[32m TOTAL = \033[0m" << sum << endl;
        bill[7] = sum;
    label74:
        cout << " WOULD YOU LIKE TO ORDER SOMETHING ELSE \033[96m(Y/N): \033[0m";
        char f;
        cin >> f;

        if (f == 'n' || f == 'N') {
            cout << "THANKS FOR VISITING MR. BEAN'S CAFE" << endl;
            cout << "Hope to see you soon.........." << endl;
        }
        else if (f == 'y' || f == 'Y') {
            cout << "SURELY......" << endl;
            goto label00;
        }
        else {
            cout << "\033[31m Invalid choice! \033[0m" << endl;
            goto label74;
        }
    }
    if (choice == 8)
    {
        cout << "------------------------------" << endl;
        cout << "|\033[35m     GHULAB JAMUN      \033[0m|" << endl;
        cout << "------------------------------" << endl;
        cout << "|\033[33m 1. Regular Gulab Jamun   \033[0m| |\033[32m    Price: Rs50         \033[0m|" << endl;
        cout << "------------------------------" << endl;
        cout << "|\033[33m 2. Kesar Gulab Jamun     \033[0m| |\033[32m    Price: Rs60         \033[0m|" << endl;
        cout << "------------------------------" << endl;
        cout << "|\033[33m 3. Dry Gulab Jamun       \033[0m| |\033[32m    Price: Rs70         \033[0m|" << endl;
        cout << "------------------------------" << endl;
        cout << "|\033[33m 4. Chocolate Gulab Jamun \033[0m| |\033[32m    Price: Rs80         \033[0m|" << endl;
        cout << "------------------------------" << endl;
        cout << "|\033[33m 5. Stuffed Gulab Jamun   \033[0m| |\033[32m    Price: Rs90         \033[0m|" << endl;
        cout << "------------------------------" << endl;
        int arr[6] = { 0,50,60,70,80,90 };
        int sum = 0;
    label81:
        cout << "ENTER YOUR CHOICE = ";
        int c1;
        if (!(cin >> c1)) {
            cout << "\033[31 invalid choice... please enter again \033[0m" << endl;
            cin.clear();


            while (cin.get() != '\n')

                continue;
            goto label81;
        }
        if (0 >= c1 || c1 > 5)
        {
            cout << "\033[31m invalid choice please enter again \033[0m" << endl;
            goto label81;
        }
        sum += arr[c1];
        cout << "\033[32m TOTAL = \033[0m" << sum << endl;
        bill[8] = sum;
    label83:
        cout << " WOULD YOU LIKE TO ORDER ANOTHER GHULAB JAMUN .... \033[96m(Y/N): \033[0m";
        char b;
        cin >> b;
        if (b == 'n' || b == 'N')
        {
            //do nothing
        }
        else if (b == 'y' || b == 'Y') {
            cout << "SURELY......" << endl;
            goto label81;
        }
        else {
            cout << "\033[31m  Invalid choice! \033[0m" << endl;
            goto label83;
        }

    label84:
        cout << " WOULD YOU LIKE TO ORDER SOMETHING ELSE \033[96m(Y/N): \033[0m";
        char f;
        cin >> f;

        if (f == 'n' || f == 'N') {
            cout << "THANKS FOR VISITING MR. BEAN'S CAFE" << endl;
            cout << "Hope to see you soon.........." << endl;
        }
        else if (f == 'y' || f == 'Y') {
            cout << "SURELY......" << endl;
            goto label00;
        }
        else {
            cout << "\033[31m Invalid choice! \033[0m" << endl;
            goto label84;
        }

    }
    if (choice == 9)
    {
        cout << "------------------------" << endl;
        cout << "|\033[35m         KHEER        \033[0m|" << endl;
        cout << "------------------------" << endl;
        cout << "|\033[33m 1. Traditional Kheer \033[0m| |\033[32m    Price: Rs150        \033[0m|" << endl;
        cout << "------------------------" << endl;
        cout << "|\033[33m 2. Badam Kheer       \033[0m| |\033[32m    Price: Rs200        \033[0m|" << endl;
        cout << "------------------------" << endl;
        cout << "|\033[33m 3. Firni             \033[0m| |\033[32m    Price: Rs180        \033[0m|" << endl;
        cout << "------------------------" << endl;
        cout << "|\033[33m 4. Rice Kheer        \033[0m| |\033[32m    Price: Rs160        \033[0m|" << endl;
        cout << "------------------------" << endl;
        cout << "|\033[33m 5. Shahi Kheer       \033[0m| |\033[32m    Price: Rs250        \033[0m|" << endl;
        cout << "------------------------" << endl;
        int arr[6] = { 0,150,200,180,160,250 };
        int sum = 0;
    label91:
        cout << "ENTER YOUR CHOICE = ";
        int c1;
        if (!(cin >> c1)) {
            cout << "\033[31 invalid choice... please enter again \033[0m" << endl;
            cin.clear();


            while (cin.get() != '\n')

                continue;
            goto label91;
        }
        ;
        if (0 >= c1 || c1 > 5)
        {
            cout << "\033[31m invalid choice please enter again 033[0m" << endl;
            goto label91;
        }
        sum += arr[c1];
        cout << "\033[32m TOTAL = \033[0m" << sum << endl;
        bill[9] = sum;
    label93:
        cout << " WOULD YOU LIKE TO ORDER ANOTHER KHEER .... \033[96m(Y/N) : \033[0m";
        char b;
        cin >> b;
        if (b == 'n' || b == 'N')
        {
            //do nothing
        }
        else if (b == 'y' || b == 'Y') {
            cout << "SURELY......" << endl;
            goto label91;
        }
        else {
            cout << "\033[31m Invalid choice! \033[0m" << endl;
            goto label93;
        }

    label94:
        cout << " WOULD YOU LIKE TO ORDER SOMETHING ELSE \033[96m(Y/N): \033[0m";
        char f;
        cin >> f;

        if (f == 'n' || f == 'N') {
            cout << "THANKS FOR VISITING MR. BEAN'S CAFE" << endl;
            cout << "Hope to see you soon.........." << endl;
        }
        else if (f == 'y' || f == 'Y') {
            cout << "SURELY......" << endl;
            goto label00;
        }
        else {
            cout << " \033[31m Invalid choice! \033[0m" << endl;
            goto label94;
        }

    }
    if (choice == 10)
    {
        cout << "------------------------" << endl;
        cout << "|\033[35m        JALEBI        \033[0m|" << endl;
        cout << "------------------------" << endl;
        cout << "|\033[33m 1. Traditional Jalebi\033[0m| |\033[32m    Price: Rs50         \033[0m|" << endl;
        cout << "------------------------" << endl;
        cout << "|\033[33m 2. Khoya Jalebi      \033[0m| |\033[32m    Price: Rs70         \033[0m|" << endl;
        cout << "------------------------" << endl;
        cout << "|\033[33m 3. Rabri Jalebi      \033[0m| |\033[32m    Price: Rs80         \033[0m|" << endl;
        cout << "------------------------" << endl;
        cout << "|\033[33m 4. Apple Jalebi      \033[0m| |\033[32m    Price: Rs60         \033[0m|" << endl;
        cout << "------------------------" << endl;
        cout << "|\033[33m 5. Chocolate Jalebi  \033[0m| |\033[32m    Price: Rs90         \033[0m|" << endl;
        cout << "------------------------" << endl;
        int arr[6] = { 0,50,70,80,60,90 };
        int sum = 0;
    label101:
        cout << "ENTER YOUR CHOICE = ";
        int c1;
        if (!(cin >> c1)) {
            cout << "\033[31 invalid choice... please enter again \033[0m" << endl;
            cin.clear();


            while (cin.get() != '\n')

                continue;
            goto label101;
        }
        if (0 >= c1 || c1 > 5)
        {
            cout << "\033[31m invalid choice please enter again \033[0m" << endl;
            goto label101;
        }
        sum += arr[c1];
        cout << "\033[32m TOTAL = \033[0m" << sum << endl;
        bill[10] = sum;
    label103:
        cout << " WOULD YOU LIKE TO ORDER ANOTHER JALEBI.... \033[96m(Y/N) : \033[0m";
        char b;
        cin >> b;
        if (b == 'n' || b == 'N')
        {
            //do nothing
        }
        else if (b == 'y' || b == 'Y') {
            cout << "SURELY......" << endl;
            goto label101;
        }
        else {
            cout << " \033[31m Invalid choice! \033[0m" << endl;
            goto label103;
        }

    label104:
        cout << " WOULD YOU LIKE TO ORDER SOMETHING ELSE \033[96m(Y/N): \033[0m";
        char f;
        cin >> f;

        if (f == 'n' || f == 'N') {
            cout << "THANKS FOR VISITING MR. BEAN'S CAFE" << endl;
            cout << "Hope to see you soon.........." << endl;
        }
        else if (f == 'y' || f == 'Y') {
            cout << "SURELY......" << endl;
            goto label00;
        }
        else {
            cout << "\033[31m Invalid choice \033[0m!" << endl;
            goto label104;
        }

    }
    if (choice == 11)
    {
        cout << "------------------------" << endl;
        cout << "|\033[35m         TEA          \033[0m|" << endl;
        cout << "------------------------" << endl;
        cout << "|\033[33m 1. Traditional Tea   \033[0m| |\033[32m    Price: Rs100        \033[0m|" << endl;
        cout << "------------------------" << endl;
        cout << "|\033[33m 2. Green Tea         \033[0m| |\033[32m    Price: Rs80         \033[0m|" << endl;
        cout << "------------------------" << endl;
        cout << "|\033[33m 3. Elaichi Tea       \033[0m| |\033[32m    Price: Rs90         \033[0m|" << endl;
        cout << "------------------------" << endl;
        cout << "|\033[33m 4. Cardamom Tea      \033[0m| |\033[32m    Price: Rs85         \033[0m|" << endl;
        cout << "------------------------" << endl;
        cout << "|\033[33m 5. Kashmiri Tea      \033[0m| |\033[32m    Price: Rs120        \033[0m|" << endl;
        cout << "------------------------" << endl;
        int arr[6] = { 0,100,80,90,85,120 };
        int sum = 0;
    label111:
        cout << "ENTER YOUR CHOICE = ";
        int c1;
        if (!(cin >> c1)) {
            cout << "\033[31 invalid choice... please enter again \033[0m" << endl;
            cin.clear();


            while (cin.get() != '\n')

                continue;
            goto label111;
        }

        if (0 >= c1 || c1 > 5)
        {
            cout << "\033[31m  invalid choice please enter again \033[0m" << endl;
            goto label111;
        }
        sum += arr[c1];
        cout << "\033[32m TOTAL = \033[0m" << sum << endl;
        bill[11] = sum;
    label113:
        cout << " WOULD YOU LIKE TO ORDER ANOTHER TEA.... \033[96m(Y/N) : \033[0m";
        char b;
        cin >> b;
        if (b == 'n' || b == 'N')
        {
            //do nothing
        }
        else if (b == 'y' || b == 'Y') {
            cout << "SURELY......" << endl;
            goto label111;
        }
        else {
            cout << " \033[31m Invalid choice! \033[0m" << endl;
            goto label113;
        }

    label114:
        cout << " WOULD YOU LIKE TO ORDER SOMETHING ELSE\033[96m (Y/N): \033[0m";
        char f;
        cin >> f;

        if (f == 'n' || f == 'N') {
            cout << "THANKS FOR VISITING MR. BEAN'S CAFE" << endl;
            cout << "Hope to see you soon.........." << endl;
        }
        else if (f == 'y' || f == 'Y') {
            cout << "SURELY......" << endl;
            goto label00;
        }
        else {
            cout << "\033[31m  Invalid choice! \033[0m" << endl;
            goto label114;
        }

    }
    if (choice == 12)
    {
        cout << "------------------------" << endl;
        cout << "|\033[35m        JUICE         \033[0m|" << endl;
        cout << "------------------------" << endl;
        cout << "|\033[33m 1. Apple Juice       \033[0m| |\033[32m    Price: Rs100        \033[0m|" << endl;
        cout << "------------------------" << endl;
        cout << "|\033[33m 2. Mango Juice       \033[0m| |\033[32m    Price: Rs120        \033[0m|" << endl;
        cout << "------------------------" << endl;
        cout << "|\033[33m 3. Pineapple Juice   \033[0m| |\033[32m    Price: Rs90         \033[0m|" << endl;
        cout << "------------------------" << endl;
        cout << "|\033[33m 4. Grape Juice       \033[0m| |\033[32m    Price: Rs110        \033[0m|" << endl;
        cout << "------------------------" << endl;
        cout << "|\033[33m 5. Lemon Juice       \033[0m| |\033[32m    Price: Rs130        \033[0m|" << endl;
        cout << "------------------------" << endl;
        int arr[6] = { 0,100,120,90,110,130 };
        int sum = 0;
    label121:
        cout << "ENTER YOUR CHOICE = ";
        int c1;
        if (!(cin >> c1)) {
            cout << "\033[31  invalid choice... please enter again \033[0m" << endl;
            cin.clear();


            while (cin.get() != '\n')

                continue;
            goto label121;
        }

        if (0 >= c1 || c1 > 5)
        {
            cout << "\033[31m invalid choice please enter again \033[0m" << endl;
            goto label121;
        }
        sum += arr[c1];
        cout << "\033[32m TOTAL = \033[0m" << sum << endl;
        bill[12] = sum;
    label123:
        cout << " WOULD YOU LIKE TO ORDER ANOTHER JUICE .... \033[96m(Y/N): \033[0m";
        char b;
        cin >> b;
        if (b == 'n' || b == 'N')
        {
            //do nothing
        }
        else if (b == 'y' || b == 'Y') {
            cout << "SURELY......" << endl;
            goto label121;
        }
        else {
            cout << "\033[31m Invalid choice! \033[0m" << endl;
            goto label123;
        }

    label124:
        cout << " WOULD YOU LIKE TO ORDER SOMETHING ELSE\033[96m (Y/N): \033[0m";
        char f;
        cin >> f;

        if (f == 'n' || f == 'N') {
            cout << "THANKS FOR VISITING MR. BEAN'S CAFE" << endl;
            cout << "Hope to see you soon.........." << endl;
        }
        else if (f == 'y' || f == 'Y') {
            cout << "SURELY......" << endl;
            goto label00;
        }
        else {
            cout << "\033[31m Invalid choice! \033[0m" << endl;
            goto label124;
        }


    }
    if (choice == 13)
    {
        cout << "--------------------------" << endl;
        cout << "|\033[35m       FALOODA          \033[0m|" << endl;
        cout << "------------------------" << endl;
        cout << "|\033[33m 1. Classic Falooda     \033[0m| |\033[32m    Price: Rs150        \033[0m|" << endl;
        cout << "--------------------------" << endl;
        cout << "|\033[33m 2. Mango Falooda       \033[0m| |\033[32m    Price: Rs180        \033[0m|" << endl;
        cout << "--------------------------" << endl;
        cout << "|\033[33m 3. Rabri Falooda       \033[0m| |\033[32m    Price: Rs200        \033[0m|" << endl;
        cout << "--------------------------" << endl;
        cout << "|\033[33m 4. Strawberry Falooda  \033[0m| |\033[32m    Price: Rs160        \033[0m|" << endl;
        cout << "--------------------------" << endl;
        cout << "|\033[33m 5. Pistachio Falooda   \033[0m| |\033[32m    Price: Rs190        \033[0m|" << endl;
        cout << "--------------------------" << endl;
        int arr[6] = { 0,150,180,200,160,190 };
        int sum = 0;
    label131:
        cout << "ENTER YOUR CHOICE = ";
        int c1;
        if (!(cin >> c1)) {
            cout << "\033[31  invalid choice... please enter again \033[0m" << endl;
            cin.clear();


            while (cin.get() != '\n')

                continue;
            goto label131;
        }

        if (0 >= c1 || c1 > 5)
        {
            cout << "\033[31m  invalid choice please enter again \033[0m" << endl;
            goto label131;
        }
        sum += arr[c1];
        cout << "\033[32m TOTAL = \033[0m" << sum << endl;
        bill[13] = sum;
    label133:
        cout << " WOULD YOU LIKE TO ORDER ANOTHER PLATE OF FALOODA.... \033[96m(Y/N) \033[0m";
        char b;
        cin >> b;
        if (b == 'n' || b == 'N')
        {
            //do nothing
        }
        else if (b == 'y' || b == 'Y') {
            cout << "SURELY......" << endl;
            goto label131;
        }
        else {
            cout << "\033[31m Invalid choice! \033[0m" << endl;
            goto label133;
        }

    label134:
        cout << " WOULD YOU LIKE TO ORDER SOMETHING ELSE \033[96m(Y/N): \033[0m";
        char f;
        cin >> f;

        if (f == 'n' || f == 'N') {
            cout << "THANKS FOR VISITING MR. BEAN'S CAFE" << endl;
            cout << "Hope to see you soon.........." << endl;
        }
        else if (f == 'y' || f == 'Y') {
            cout << "SURELY......" << endl;
            goto label00;
        }
        else {
            cout << "\033[31m Invalid choice! \033[0m" << endl;
            goto label134;
        }
    }

    cout << endl << endl;
    cout << " -------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "                                                                                                                                               " << endl;
    cout << "\033[31m                                                                    *****   *****  *      *                                                \n";
    cout << "                                                                    *    *    *    *      *                                                  \n";
    cout << "                                                                    *****     *    *      *                                                            \n";
    cout << "                                                                    *    *    *    *      *                                                   \n";
    cout << "                                                                    *****   *****  *****  *****                                            \033[0m" << endl;
    cout << "                                                                                                                                           " << endl;
    cout << "                                                                                                                                          " << endl;
    cout << "                                                                                                                                         " << endl;
    cout << "        ------------------------------------------------------------------ITEMS-ORDERED-----------------------------------------------------------------          " << endl;
    cout << "                                                                                                                                         " << endl;
    cout << "                                                                                                                                          " << endl;

    if (bill[1] != 0)
    {
        cout << "                 BIRYANI.......................................................................... price " << bill[1] << endl;
        cout << "                                                                                                                                          " << endl;
    }
    if (bill[2] != 0)
    {
        cout << "                 KEBAB............................................................................ price " << bill[2] << endl;
        cout << "                                                                                                                                          " << endl;
    }
    if (bill[3] != 0)
    {
        cout << "                 NIHARI........................................................................... price " << bill[3] << endl;
        cout << "                                                                                                                                          " << endl;
    }
    if (bill[4] != 0)
    {
        cout << "                 HALEEM........................................................................... price " << bill[4] << endl;
        cout << "                                                                                                                                          " << endl;
    }
    if (bill[5] != 0)
    {
        cout << "                 KARHAI........................................................................... price " << bill[5] << endl;
        cout << "                                                                                                                                         " << endl;
    }

    if (bill[6] != 0)
    {
        cout << "                 LUNCH SPECIAL.................................................................... price " << bill[6] << endl;
        cout << "                                                                                                                                         " << endl;
    }
    if (bill[7] != 0)
    {
        cout << "                 DINNER SPECIAL................................................................... price " << bill[7] << endl;
        cout << "                                                                                                                                         " << endl;
    }
    if (bill[8] != 0)
    {
        cout << "                 GULAB JAMUN...................................................................... price " << bill[8] << endl;
        cout << "                                                                                                                                         " << endl;
    }
    if (bill[9] != 0)
    {
        cout << "                 KHEER............................................................................ price " << bill[9] << endl;
        cout << "                                                                                                                                          " << endl;

    }
    if (bill[10] != 0)
    {
        cout << "                 JALEEBI.......................................................................... price " << bill[10] << endl;
        cout << "                                                                                                                                          " << endl;
    }
    if (bill[11] != 0)
    {
        cout << "                 TEA.............................................................................. price " << bill[11] << endl;
        cout << "                                                                                                                                           " << endl;
    }
    if (bill[12] != 0)
    {
        cout << "                 JUICE............................................................................ price " << bill[12] << endl;

        cout << "                                                                                                                                            " << endl;
    }
    if (bill[13] != 0)
    {
        cout << "                 FALOODA.......................................................................... price " << bill[13] << endl;
        cout << "                                                                                                                                           " << endl;
    }

    int gtotal = 0;
    for (int i = 1; i <= 13; i++) {
        gtotal += bill[i];
    }
    int grandtotal = tax(gtotal);
    cout << "                                                                                                                                                                  " << endl;
    cout << "                                                                 \033[33m   TOTAL = \033[32mRs" << gtotal << "\033[0m \033[33m+ TAX(12%)   \033[0m               " << endl;
    cout << "                                                                                                                                                                  " << endl;
    cout << "                                                                     \033[31m  TAX AMOUNT = Rs" << taxamount(gtotal) << " \033[0m                                " << endl;
    cout << "                                                                                                                                                                  " << endl;
    cout << "              -----------------------------------------------------------------------------------------------------------------------                                      " << endl;
    cout << "              |\033[32m  YOUR TOTAL BILL IS ............................................................. GRANDTOTAL = \033[33mRs" << grandtotal << "  \033[0m              |  " << endl;
    cout << "              -----------------------------------------------------------------------------------------------------------------------                                      " << endl;
    cout << "                                                                                                                                                                  " << endl;
    cout << "                                                                                                                                                                  " << endl;
    cout << " -------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
    return 0;
}
int tax(int gtotal)

{
    int tax = gtotal + floor(gtotal * 12 / 100);
    return tax;
}
int taxamount(int gtotal)
{
    int taxamount = floor(gtotal * 12 / 100);
    return taxamount;
}