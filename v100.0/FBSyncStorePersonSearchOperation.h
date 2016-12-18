/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>
#import <Messenger/FBCancelable.h>

@protocol FBSyncPersonLoadedListener;
@class NSMutableDictionary, NSArray, FBSyncStorePersonSearchOperationConfig, EGODatabase, NSDictionary;

@interface FBSyncStorePersonSearchOperation : NSOperation <FBCancelable> {

	NSMutableDictionary* _mutablePeople;
	NSArray* _peopleArray;
	FBSyncStorePersonSearchOperationConfig* _config;
	EGODatabase* _db;
	NSDictionary* _dbStatements;
	NSDictionary* _parameters;
	id<FBSyncPersonLoadedListener> _listener;
	/*^block*/id _queryBuilder;
	NSArray* _queryBuilderArgs;

}

@property (retain) EGODatabase * db;                                                       //@synthesize db=_db - In the implementation block
@property (copy) NSDictionary * dbStatements;                                              //@synthesize dbStatements=_dbStatements - In the implementation block
@property (copy) NSDictionary * parameters;                                                //@synthesize parameters=_parameters - In the implementation block
@property (assign,nonatomic,__weak) id<FBSyncPersonLoadedListener> listener;               //@synthesize listener=_listener - In the implementation block
@property (nonatomic,copy) id queryBuilder;                                                //@synthesize queryBuilder=_queryBuilder - In the implementation block
@property (nonatomic,copy) NSArray * queryBuilderArgs;                                     //@synthesize queryBuilderArgs=_queryBuilderArgs - In the implementation block
@property (nonatomic,copy,readonly) NSArray * peopleArray; 
@property (nonatomic,retain) FBSyncStorePersonSearchOperationConfig * config;              //@synthesize config=_config - In the implementation block
-(NSArray *)peopleArray;
-(NSDictionary *)dbStatements;
-(void)setDbStatements:(NSDictionary *)arg1 ;
-(void)setQueryBuilder:(id)arg1 ;
-(void)setQueryBuilderArgs:(NSArray *)arg1 ;
-(id)queryBuilder;
-(NSArray *)queryBuilderArgs;
-(void)executePersonStatement:(id)arg1 parameters:(id)arg2 ;
-(id)initWithDB:(id)arg1 listener:(id)arg2 statements:(id)arg3 parameters:(id)arg4 ;
-(id)initWithDB:(id)arg1 listener:(id)arg2 statement:(id)arg3 parameters:(id)arg4 ;
-(id)initWithDB:(id)arg1 listener:(id)arg2 queryBuilder:(/*^block*/id)arg3 queryBuilderArgs:(id)arg4 ;
-(FBSyncStorePersonSearchOperationConfig *)config;
-(NSDictionary *)parameters;
-(void)setParameters:(NSDictionary *)arg1 ;
-(void)main;
-(void)setConfig:(FBSyncStorePersonSearchOperationConfig *)arg1 ;
-(id<FBSyncPersonLoadedListener>)listener;
-(void)setListener:(id<FBSyncPersonLoadedListener>)arg1 ;
-(EGODatabase *)db;
-(void)setDb:(EGODatabase *)arg1 ;
@end

