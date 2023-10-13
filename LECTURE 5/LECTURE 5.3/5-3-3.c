#include<stdio.h>
#define P printf
#define S scanf

main()
{
	int choice;


	P("Press...\n");
	P("1) for english\n");
	P("2) for hindi\n");
	P("3) for gujarati\n");
	P("Enter your choice:");
	S("%d",&choice);

	switch(choice)
	{
		case 1:
			P("english!!\n");

			P("Press...\n");
			P("Press 1 for Internet Recharge\n\n");
			P("Press 2 for Top-up Recharge\n\n");
			P("Press 3 for Special Rcharge\n\n");
			P("Press your choice:");
			S("%d",&choice);

			switch(choice)
			{
				case 1:
					P("You've Pressed Internet Recharge!!\n\n");
					break;
				case 2:
					P("You've Pressed Top-up Recharge!!\n\n");
					break;
				case 3:
					P("You've Pressed Special Recharge!!\n\n");
					break;
				default:
					P("we have not this scheme\n\n");
			}
		case 2:
			P("Hindi!!\n");

			P("Press...\n");
			P("Internet Recharge ke liye 1 dabaye\n\n");
			P("Top-up Recharge ke liye 2 dabaye\n\n");
			P("Special Rcharge ke liye 3 dabaye\n\n");
			P("Press your choice:");
			S("%d",&choice);

			switch(choice)
			{
				case 1:
					P("apne safaltapurvak Internet Recharge kar liya hai\n\n!!");
					break;
				case 2:
					P("apne safaltapurvak Top-up Recharge kar liya hai\n\n!!");
					break;
				case 3:
					P("apne safaltapurvak Special Recharge kar liya hai\n\n!!");
					break;
				default:
					P("hamare pass yeh seva uplabdh nahi hai");
		       }
		case 3:
			P("Gujarati!!\n");

			P("Press...\n");
			P("Internet Recharge mate 1 dabavo\n\n");
			P("Top-up Recharge mate 2 dabavo\n\n");
			P("Special Rcharge mate 3 dabavo\n\n");
			P("Press your choice:");
			S("%d",&choice);

			switch(choice)
			{
				case 1:
					P("tame safaltapurvak Internet Recharge kari lidhu chhe\n\n!!");
					break;
				case 2:
					P("tame safaltapurvak Top-up Recharge kari lidhu chhe\n\n!!");
					break;
				case 3:
					P("tame safaltapurvak Special Recharge kari lidhu chhe\n\n!!");
					break;
				default:
					P("amari pase aa seva uplabdh nathi\n\n");
			}

	}
	
}
