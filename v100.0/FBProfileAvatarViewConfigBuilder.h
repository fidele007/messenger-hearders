/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBUIConfigBuilder.h>

@protocol FBImageFilter;
@class NSString, UIImage, FBScenePath, NSSet;

@interface FBProfileAvatarViewConfigBuilder : NSObject <FBUIConfigBuilder> {

	NSString* _profileID;
	unsigned long long _size;
	double _customSizeLength;
	unsigned long long _style;
	id<FBImageFilter> _customFilter;
	NSString* _placeholderIdentifier;
	UIImage* _placeholderImage;
	/*^block*/id _userSessionLoader;
	FBScenePath* _scenePath;
	NSSet* _analyticsTags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)builderFromConfig:(id)arg1 ;
+(id)builderForInstance:(id)arg1 ;
+(id)builderIgnoringClassLevelOverrides;
+(id)builder;
-(id)setScenePath:(id)arg1 ;
-(id)setAnalyticsTags:(id)arg1 ;
-(id)setProfileID:(id)arg1 ;
-(id)setCustomSizeLength:(double)arg1 ;
-(id)setCustomFilter:(id)arg1 ;
-(id)setPlaceholderIdentifier:(id)arg1 ;
-(id)setUserSessionLoader:(/*^block*/id)arg1 ;
-(id)_init;
-(id)setStyle:(unsigned long long)arg1 ;
-(id)setSize:(unsigned long long)arg1 ;
-(id)setPlaceholderImage:(id)arg1 ;
-(id)build;
@end
