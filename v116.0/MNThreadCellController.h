/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:47 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBClassInjectable.h>

@class MNThreadCellControllerInjector, FBMLocalThreadKey, NSString;

@interface MNThreadCellController : NSObject <FBClassInjectable> {

	MNThreadCellControllerInjector* _injector;
	FBMLocalThreadKey* _localThreadKeyOfSelectedThread;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) FBMLocalThreadKey * localThreadKeyOfSelectedThread;              //@synthesize localThreadKeyOfSelectedThread=_localThreadKeyOfSelectedThread - In the implementation block
+(Class)injectorClass;
-(void)setUpThreadCell:(id)arg1 withThreadRow:(id)arg2 hideOptions:(id)arg3 ;
-(void)_updateSeenHeadListViewWithThreadCell:(id)arg1 threadRow:(id)arg2 ;
-(void)_updateSubtitleWithThreadCell:(id)arg1 threadRow:(id)arg2 ;
-(void)_updateProfileImageViewWithThreadCell:(id)arg1 threadRow:(id)arg2 ;
-(void)_updateMontageThumbnailWithThreadCell:(id)arg1 threadRow:(id)arg2 ;
-(void)_updateGenericSnippetViewWithThreadCell:(id)arg1 threadRow:(id)arg2 ;
-(void)_configurePhotoViewWithThreadCell:(id)arg1 genericSnippetView:(id)arg2 photoViewModel:(id)arg3 animated:(BOOL)arg4 ;
-(void)setLocalThreadKeyOfSelectedThread:(FBMLocalThreadKey *)arg1 ;
-(FBMLocalThreadKey *)localThreadKeyOfSelectedThread;
-(void)threadCellWillAppear:(id)arg1 ;
-(void)threadCellDidDisappear:(id)arg1 ;
-(id)initWithInjector:(id)arg1 ;
@end

