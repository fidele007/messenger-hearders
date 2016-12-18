/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:53 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class EGODatabase, NSArray, NSError;

@interface EGODatabaseUpdateListRequest : NSOperation {

	EGODatabase* database_;
	NSArray* statements_;
	NSArray* parameterLists_;
	NSError* error_;

}

@property (nonatomic,copy) NSArray * statements; 
@property (nonatomic,copy) NSArray * parameterLists; 
@property (assign,nonatomic) EGODatabase * database; 
@property (nonatomic,retain) NSError * error; 
+(id)requestWithUpdateStatements:(id)arg1 parameterLists:(id)arg2 database:(id)arg3 ;
-(void)setParameterLists:(NSArray *)arg1 ;
-(id)initWithUpdateStatements:(id)arg1 parameterLists:(id)arg2 database:(id)arg3 ;
-(NSArray *)parameterLists;
-(void)dealloc;
-(void)main;
-(NSArray *)statements;
-(void)setStatements:(NSArray *)arg1 ;
-(EGODatabase *)database;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(void)setDatabase:(EGODatabase *)arg1 ;
@end

