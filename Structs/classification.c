#include <stdio.h>

typedef struct teamStats {
	int totalGames;
	int winnedGames;
	int drawnGames;
	int lostGames;
	int goalsFavour;
	int goalsAgainst;
} teamStats;



int main()
{
	int teamNum = -1;
	int totalTeams = 10;
	int games = 0;
	teamStats team [10] = { 0 };
	int firstTeam = 0;
	int lastTeam = 0;

	

	for (int i = 0; i < totalTeams; i++)
	{
		printf("\nIntroduce the results of the team number %i: ", i);
		
		printf("\nIntroduce the number of games played: ");
		scanf_s("%i", &team[i].totalGames);

		printf("\nIntroduce the number of victories: ");
		scanf_s("%i", &team[i].winnedGames);

		printf("\nIntroduce the number of losses: ");
		scanf_s("%i", &team[i].lostGames);

		printf("\nIntroduce the number of drawns: ");
		scanf_s("%i", &team[i].drawnGames);

		printf("\nIntroduce the goals in favour: ");
		scanf_s("%i", &team[i].goalsFavour);

		printf("\nIntroduce the goals against: ");
		scanf_s("%i", &team[i].goalsAgainst);

	}
	
	
	//printf("Total games = %i", team[teamNum].totalGames);
	for(int i = 0; i < totalTeams; i++)
	{
		for (int j = 0; j < totalTeams; j++)
		{
			if (team[i].winnedGames > team[j].winnedGames) firstTeam = i;
			if (team[i].lostGames > team[j].lostGames) lastTeam = i;
			else break;
		}
	}
	

	printf("\nFirst team: %i", firstTeam);
	printf("\nLast team: %i", lastTeam);
	printf("\n----------------------------------------------------");
	
	for(int i = 0; i < totalTeams; i++)
	{
		printf("\nTeam %i stats: ", i);
		printf("\nGames played: %i", team[i].totalGames);
		printf("\nGames won: %i", team[i].winnedGames);
		printf("\nGames lost: %i", team[i].lostGames);
		printf("\nGames drawed: %i", team[i].drawnGames);
		printf("\nGoals in favour: %i", team[i].goalsFavour);
		printf("\nGoals against: %i", team[i].goalsAgainst);
		printf("\n\n");
	
	
	}
	printf("\n----------------------------------------------------");

	return 0;
}

