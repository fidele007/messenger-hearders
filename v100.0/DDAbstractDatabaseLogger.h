/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:53 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/DDAbstractLogger.h>

@protocol OS_dispatch_source;
@class NSObject;

@interface DDAbstractDatabaseLogger : DDAbstractLogger {

	unsigned long long saveThreshold;
	double saveInterval;
	double maxAge;
	double deleteInterval;
	BOOL deleteOnEverySave;
	BOOL saveTimerSuspended;
	unsigned long long unsavedCount;
	unsigned long long unsavedTime;
	NSObject*<OS_dispatch_source> saveTimer;
	unsigned long long lastDeleteTime;
	NSObject*<OS_dispatch_source> deleteTimer;

}

@property (assign) unsigned long long saveThreshold; 
@property (assign) double saveInterval; 
@property (assign) double maxAge; 
@property (assign) double deleteInterval; 
@property (assign) BOOL deleteOnEverySave; 
-(void)didAddLogger;
-(void)willRemoveLogger;
-(void)destroySaveTimer;
-(void)destroyDeleteTimer;
-(void)db_saveAndDelete;
-(void)db_save;
-(void)db_delete;
-(void)performSaveAndSuspendSaveTimer;
-(void)performDelete;
-(void)updateDeleteTimer;
-(void)createSuspendedSaveTimer;
-(void)updateAndResumeSaveTimer;
-(void)createAndStartDeleteTimer;
-(BOOL)db_log:(id)arg1 ;
-(unsigned long long)saveThreshold;
-(void)setSaveThreshold:(unsigned long long)arg1 ;
-(double)saveInterval;
-(void)setSaveInterval:(double)arg1 ;
-(double)deleteInterval;
-(void)setDeleteInterval:(double)arg1 ;
-(BOOL)deleteOnEverySave;
-(void)setDeleteOnEverySave:(BOOL)arg1 ;
-(void)savePendingLogEntries;
-(void)deleteOldLogEntries;
-(void)dealloc;
-(id)init;
-(void)flush;
-(void)setMaxAge:(double)arg1 ;
-(double)maxAge;
-(void)logMessage:(id)arg1 ;
@end
