/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:27 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface IosMediaPromptsUniverseExperimentContext : FBExperimentContext {

	BOOL _enableSlideshowPrompts;
	BOOL _enableSouvenirPrompts;
	BOOL _enablePhotoPrompts;

}

@property (assign,nonatomic) BOOL enableSlideshowPrompts;              //@synthesize enableSlideshowPrompts=_enableSlideshowPrompts - In the implementation block
@property (assign,nonatomic) BOOL enableSouvenirPrompts;               //@synthesize enableSouvenirPrompts=_enableSouvenirPrompts - In the implementation block
@property (assign,nonatomic) BOOL enablePhotoPrompts;                  //@synthesize enablePhotoPrompts=_enablePhotoPrompts - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(BOOL)enablePhotoPrompts;
-(BOOL)enableSlideshowPrompts;
-(BOOL)enableSouvenirPrompts;
-(void)setEnableSlideshowPrompts:(BOOL)arg1 ;
-(void)setEnableSouvenirPrompts:(BOOL)arg1 ;
-(void)setEnablePhotoPrompts:(BOOL)arg1 ;
@end
