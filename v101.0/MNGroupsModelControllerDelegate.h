/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:17 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
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
