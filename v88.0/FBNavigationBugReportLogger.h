/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:53 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSDateFormatter;

@interface FBNavigationBugReportLogger : NSObject {

	NSMutableArray* _logs;
	NSDateFormatter* _dateFormatter;

}
-(id)_currentTimestamp;
-(id)consolidatedLogs;
-(void)clearAllLogs;
-(id)init;
-(void)logMessage:(id)arg1 ;
@end

