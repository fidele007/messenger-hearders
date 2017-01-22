/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:17 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassInjectable.h>
#import <Messenger/MNGroupsRoomNullStateViewDelegate.h>
#import <Messenger/MNThreadViewModelConfigurable.h>

@class MNGroupsRoomNullStateControllerInjector, MNGroupsRoomNullStateView, MNThreadViewModel, NSString;

@interface MNGroupsRoomNullStateController : NSObject <FBClassInjectable, MNGroupsRoomNullStateViewDelegate, MNThreadViewModelConfigurable> {

	MNGroupsRoomNullStateControllerInjector* _injector;
	MNGroupsRoomNullStateView* _nullStateView;
	MNThreadViewModel* _threadViewModel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNJoinableGroupShareControllerDelegate> shareSheetDelegate; 
+(Class)injectorClass;
-(id)initWithInjector:(id)arg1 ;
-(void)tearDownThreadViewModelDependencies;
-(void)configureThreadViewModelDependenciesWith:(id)arg1 ;
-(id)threadViewModel;
-(BOOL)shouldShowNullStateView;
-(id)_nullStateViewModel;
-(void)setShareSheetDelegate:(id<MNJoinableGroupShareControllerDelegate>)arg1 ;
-(void)roomNullStateViewDidTapShare:(id)arg1 fromShareButton:(id)arg2 ;
-(id)nullStateView;
@end
