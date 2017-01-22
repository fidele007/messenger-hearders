/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:19 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSArray, MNBotComposerMenuViewModel, MNBotComposerShoppingBannerViewModel;

@interface MNBotComposerViewModel : FBValueObject <NSCopying, NSCoding> {

	BOOL _shouldShowMenuIcon;
	NSString* _pageID;
	unsigned long long _menuIconBadgeCount;
	NSArray* _horizontalCTAViewModels;
	MNBotComposerMenuViewModel* _menuViewModel;
	MNBotComposerShoppingBannerViewModel* _shoppingBannerViewModel;

}

@property (nonatomic,copy,readonly) NSString * pageID;                                                           //@synthesize pageID=_pageID - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowMenuIcon;                                                          //@synthesize shouldShowMenuIcon=_shouldShowMenuIcon - In the implementation block
@property (nonatomic,readonly) unsigned long long menuIconBadgeCount;                                            //@synthesize menuIconBadgeCount=_menuIconBadgeCount - In the implementation block
@property (nonatomic,copy,readonly) NSArray * horizontalCTAViewModels;                                           //@synthesize horizontalCTAViewModels=_horizontalCTAViewModels - In the implementation block
@property (nonatomic,copy,readonly) MNBotComposerMenuViewModel * menuViewModel;                                  //@synthesize menuViewModel=_menuViewModel - In the implementation block
@property (nonatomic,copy,readonly) MNBotComposerShoppingBannerViewModel * shoppingBannerViewModel;              //@synthesize shoppingBannerViewModel=_shoppingBannerViewModel - In the implementation block
-(MNBotComposerMenuViewModel *)menuViewModel;
-(BOOL)shouldShowMenuIcon;
-(unsigned long long)menuIconBadgeCount;
-(NSArray *)horizontalCTAViewModels;
-(MNBotComposerShoppingBannerViewModel *)shoppingBannerViewModel;
-(id)initWithPageID:(id)arg1 shouldShowMenuIcon:(BOOL)arg2 menuIconBadgeCount:(unsigned long long)arg3 horizontalCTAViewModels:(id)arg4 menuViewModel:(id)arg5 shoppingBannerViewModel:(id)arg6 ;
-(NSString *)pageID;
@end
