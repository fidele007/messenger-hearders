/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:32 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNGroupsModelControllerDelegate <NSObject>
@required
-(void)groupModelController:(id)arg1 didRemoveThreadWithKey:(id)arg2 atIndex:(unsigned long long)arg3;
-(void)groupModelController:(id)arg1 didMoveThreadWithKey:(id)arg2 toIndex:(unsigned long long)arg3;
-(void)groupModelControllerDidFinishFetch:(id)arg1;
-(void)groupModelControllerDidFailFetch:(id)arg1 error:(id)arg2;
-(void)groupModelControllerDidFinishLoadingViewModels:(id)arg1;
-(void)groupModelControllerDidFailLoadingViewModels:(id)arg1 error:(id)arg2;
-(void)groupModelControllerDidFinishFetchingAllGroups:(id)arg1;

@end

