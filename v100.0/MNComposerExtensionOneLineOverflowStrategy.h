/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNComposerExtensionOverflowStrategy.h>

@class NSArray, MNComposerOverflowExtension, MNComposerPlatformAppsExtension, NSString;

@interface MNComposerExtensionOneLineOverflowStrategy : NSObject <MNComposerExtensionOverflowStrategy> {

	long long _composerBarButtonCollection;
	NSArray* _extensions;
	NSArray* _extensionsToDisplay;
	unsigned long long _maximumNumberOfExtensionsToDisplay;
	unsigned long long _numberOfPotentialExtensionsToDisplay;
	MNComposerOverflowExtension* _overflowExtension;
	MNComposerPlatformAppsExtension* _platformAppsExtension;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSArray * extensions;                                                     //@synthesize extensions=_extensions - In the implementation block
@property (nonatomic,copy,readonly) NSArray * extensionsToDisplay;                                   //@synthesize extensionsToDisplay=_extensionsToDisplay - In the implementation block
@property (assign,nonatomic) unsigned long long maximumNumberOfExtensionsToDisplay;                  //@synthesize maximumNumberOfExtensionsToDisplay=_maximumNumberOfExtensionsToDisplay - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfPotentialExtensionsToDisplay;              //@synthesize numberOfPotentialExtensionsToDisplay=_numberOfPotentialExtensionsToDisplay - In the implementation block
@property (nonatomic,readonly) MNComposerOverflowExtension * overflowExtension;                      //@synthesize overflowExtension=_overflowExtension - In the implementation block
@property (nonatomic,readonly) MNComposerPlatformAppsExtension * platformAppsExtension;              //@synthesize platformAppsExtension=_platformAppsExtension - In the implementation block
-(id)initWithOverflowExtension:(id)arg1 platformAppsExtension:(id)arg2 composerBarButtonCollection:(long long)arg3 ;
-(BOOL)extensionIsInOverflow:(id)arg1 ;
-(unsigned long long)indexOfExtensionInExtensionsToDisplay:(id)arg1 ;
-(NSArray *)extensionsToDisplay;
-(unsigned long long)maximumNumberOfExtensionsToDisplay;
-(void)setMaximumNumberOfExtensionsToDisplay:(unsigned long long)arg1 ;
-(unsigned long long)numberOfPotentialExtensionsToDisplay;
-(MNComposerOverflowExtension *)overflowExtension;
-(MNComposerPlatformAppsExtension *)platformAppsExtension;
-(NSArray *)extensions;
-(void)setExtensions:(NSArray *)arg1 ;
@end

