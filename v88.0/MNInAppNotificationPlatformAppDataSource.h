/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNInAppNotificationViewDataSource.h>
#import <Messenger/FBClassProvidable.h>

@protocol FBProvider;
@class MNPlatformAppItem, UIImageView, NSString;

@interface MNInAppNotificationPlatformAppDataSource : NSObject <MNInAppNotificationViewDataSource, FBClassProvidable> {

	id<FBProvider> _iconControllerProvider;
	MNPlatformAppItem* _appItem;
	UIImageView* _iconView;
	NSString* _messageText;
	NSString* _appName;

}

@property (nonatomic,readonly) MNPlatformAppItem * appItem;              //@synthesize appItem=_appItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(MNPlatformAppItem *)appItem;
-(id)inAppNotificationTitle;
-(id)inAppNotificationMessage;
-(id)inAppNotificationImageView;
-(void)_initAppNameIfNecessary;
-(void)_initMessageTextIfNecessary;
-(void)_setAppIconViewImageIfNecessary;
-(void)configureForAppItem:(id)arg1 ;
@end

