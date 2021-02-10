namespace Characters
{
	class Character
	{
	private:
		int _maxHealth;
		int _health;
		int _damage;

	public:


		Character(int maxHealth, int damage);

		int getHealth();

		int getDamage();

		bool isDead();

		void takeDamage(int damage);
	};
}