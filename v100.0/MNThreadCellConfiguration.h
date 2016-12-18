/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:28 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MNThreadCellConfiguration : FBValueObject <NSCopying> {

	BOOL _shouldShowDeleteButtonInActionPanel;
	BOOL _shouldShowMoreButtonInActionPanel;
	BOOL _shouldShowHideButtonInActionPanel;
	BOOL _shouldShowHideAllButtonInActionPanel;
	BOOL _shouldShowIgnoreButtonInActionPanel;
	BOOL _shouldShowRequestActionView;
	long long _muteDisplaySettingForActionPanel;

}

@property (nonatomic,readonly) BOOL shouldShowDeleteButtonInActionPanel;                //@synthesize shouldShowDeleteButtonInActionPanel=_shouldShowDeleteButtonInActionPanel - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowMoreButtonInActionPanel;                  //@synthesize shouldShowMoreButtonInActionPanel=_shouldShowMoreButtonInActionPanel - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowHideButtonInActionPanel;                  //@synthesize shouldShowHideButtonInActionPanel=_shouldShowHideButtonInActionPanel - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowHideAllButtonInActionPanel;               //@synthesize shouldShowHideAllButtonInActionPanel=_shouldShowHideAllButtonInActionPanel - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowIgnoreButtonInActionPanel;                //@synthesize shouldShowIgnoreButtonInActionPanel=_shouldShowIgnoreButtonInActionPanel - In the implementation block
@property (nonatomic,readonly) long long muteDisplaySettingForActionPanel;              //@synthesize muteDisplaySettingForActionPanel=_muteDisplaySettingForActionPanel - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowRequestActionView;                        //@synthesize shouldShowRequestActionView=_shouldShowRequestActionView - In the implementation block
-(unsigned long)hashDynamic;
-(BOOL)isEqualDynamic:(id)arg1 ;
-(id)initWithShouldShowDeleteButtonInActionPanel:(BOOL)arg1 shouldShowMoreButtonInActionPanel:(BOOL)arg2 shouldShowHideButtonInActionPanel:(BOOL)arg3 shouldShowHideAllButtonInActionPanel:(BOOL)arg4 shouldShowIgnoreButtonInActionPanel:(BOOL)arg5 muteDisplaySettingForActionPanel:(long long)arg6 shouldShowRequestActionView:(BOOL)arg7 ;
-(BOOL)shouldShowRequestActionView;
-(BOOL)shouldShowMoreButtonInActionPanel;
-(long long)muteDisplaySettingForActionPanel;
-(BOOL)shouldShowIgnoreButtonInActionPanel;
-(BOOL)shouldShowDeleteButtonInActionPanel;
-(BOOL)shouldShowHideAllButtonInActionPanel;
-(BOOL)shouldShowHideButtonInActionPanel;
@end
