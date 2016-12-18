/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:27 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@class NSString;

@interface FBComposerFeedStoryPrivacyExperimentContext : FBExperimentContext {

	BOOL _includeGlyph;
	NSString* _color;
	BOOL _privacyAtStart;
	BOOL _enabled;
	BOOL _renderPill;
	NSString* _iconImageNames;
	BOOL _includeText;

}

@property (assign,nonatomic) BOOL includeGlyph;                    //@synthesize includeGlyph=_includeGlyph - In the implementation block
@property (nonatomic,copy) NSString * color;                       //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) BOOL privacyAtStart;                  //@synthesize privacyAtStart=_privacyAtStart - In the implementation block
@property (assign,nonatomic) BOOL enabled;                         //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) BOOL renderPill;                      //@synthesize renderPill=_renderPill - In the implementation block
@property (nonatomic,copy) NSString * iconImageNames;              //@synthesize iconImageNames=_iconImageNames - In the implementation block
@property (assign,nonatomic) BOOL includeText;                     //@synthesize includeText=_includeText - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(BOOL)includeGlyph;
-(BOOL)includeText;
-(BOOL)renderPill;
-(void)setIncludeGlyph:(BOOL)arg1 ;
-(void)setRenderPill:(BOOL)arg1 ;
-(void)setIncludeText:(BOOL)arg1 ;
-(NSString *)iconImageNames;
-(BOOL)privacyAtStart;
-(void)setPrivacyAtStart:(BOOL)arg1 ;
-(void)setIconImageNames:(NSString *)arg1 ;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(NSString *)color;
-(void)setColor:(NSString *)arg1 ;
@end

