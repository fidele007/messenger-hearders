/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:45 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MNRecentTabConfiguration : FBValueObject <NSCopying> {

	NSString* _navigationBarTitle;
	NSString* _backBarButtonItemTitle;
	NSString* _tabBarItemTitle;

}

@property (nonatomic,copy,readonly) NSString * navigationBarTitle;                  //@synthesize navigationBarTitle=_navigationBarTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * backBarButtonItemTitle;              //@synthesize backBarButtonItemTitle=_backBarButtonItemTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * tabBarItemTitle;                     //@synthesize tabBarItemTitle=_tabBarItemTitle - In the implementation block
-(id)initWithNavigationBarTitle:(id)arg1 backBarButtonItemTitle:(id)arg2 tabBarItemTitle:(id)arg3 ;
-(NSString *)backBarButtonItemTitle;
-(NSString *)tabBarItemTitle;
-(NSString *)navigationBarTitle;
@end

