/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:27 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@class NSString;

@interface FBComposerRatingTextExperimentContext : FBExperimentContext {

	BOOL _useAlternateCopy;
	NSString* _star5;
	NSString* _star4;
	BOOL _showAdvisory;
	NSString* _star1;
	NSString* _star3;
	NSString* _star2;

}

@property (assign,nonatomic) BOOL useAlternateCopy;              //@synthesize useAlternateCopy=_useAlternateCopy - In the implementation block
@property (nonatomic,copy) NSString * star5;                     //@synthesize star5=_star5 - In the implementation block
@property (nonatomic,copy) NSString * star4;                     //@synthesize star4=_star4 - In the implementation block
@property (assign,nonatomic) BOOL showAdvisory;                  //@synthesize showAdvisory=_showAdvisory - In the implementation block
@property (nonatomic,copy) NSString * star1;                     //@synthesize star1=_star1 - In the implementation block
@property (nonatomic,copy) NSString * star3;                     //@synthesize star3=_star3 - In the implementation block
@property (nonatomic,copy) NSString * star2;                     //@synthesize star2=_star2 - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(BOOL)showAdvisory;
-(NSString *)star1;
-(NSString *)star2;
-(NSString *)star3;
-(NSString *)star4;
-(NSString *)star5;
-(BOOL)useAlternateCopy;
-(void)setUseAlternateCopy:(BOOL)arg1 ;
-(void)setStar5:(NSString *)arg1 ;
-(void)setStar4:(NSString *)arg1 ;
-(void)setShowAdvisory:(BOOL)arg1 ;
-(void)setStar1:(NSString *)arg1 ;
-(void)setStar3:(NSString *)arg1 ;
-(void)setStar2:(NSString *)arg1 ;
@end

