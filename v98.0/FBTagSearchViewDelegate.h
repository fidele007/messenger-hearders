/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBTagSearchViewDelegate <NSObject>
@optional
-(void)tagSearchViewWillAppear:(id)arg1 preserveScrollEnabled:(BOOL)arg2;
-(void)tagSearchViewDidAppear:(id)arg1;
-(void)tagSearchViewWillDisappear:(id)arg1 animated:(BOOL)arg2;
-(void)tagSearchViewDidDisappear:(id)arg1;
-(void)didFinishTagEditing:(id)arg1 withAvatar:(id)arg2 loggingSource:(id)arg3;

@required
-(void)tagSearchView:(id)arg1 searchTextDidChange:(id)arg2;
-(void)tagSearchView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3;

@end

