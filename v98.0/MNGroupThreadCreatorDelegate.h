/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:53 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNGroupThreadCreatorDelegate <NSObject>
@optional
-(void)groupThreadCreator:(id)arg1 didUpdateProgress:(double)arg2;
-(void)groupThreadCreatorWillStartRequest:(id)arg1;

@required
-(void)groupThreadCreator:(id)arg1 didFinishWithThreadSummary:(id)arg2;
-(void)groupThreadCreator:(id)arg1 didFailWithError:(id)arg2;

@end

