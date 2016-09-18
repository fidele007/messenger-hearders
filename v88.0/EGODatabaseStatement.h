/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:07 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class EGODatabase, NSString, NSArray;

@interface EGODatabaseStatement : NSObject {

	EGODatabase* db_;
	NSString* sql_;
	NSArray* columnNames_;
	BOOL finalized_;
	sqlite3_stmtRef statement_;

}

@property (assign,nonatomic) sqlite3_stmtRef sqliteHandle; 
@property (nonatomic,copy) NSString * sql; 
@property (nonatomic,retain) NSArray * columnNames; 
+(id)statementWithSQL:(id)arg1 database:(id)arg2 ;
-(BOOL)bindToParameters:(id)arg1 ;
-(sqlite3_stmtRef)sqliteHandle;
-(void)setColumnNames:(NSArray *)arg1 ;
-(void)bindObject:(id)arg1 toColumn:(int)arg2 ;
-(void)setSqliteHandle:(sqlite3_stmtRef)arg1 ;
-(void)dealloc;
-(id)description;
-(BOOL)reset;
-(NSString *)sql;
-(BOOL)finalizeStatement;
-(void)setSql:(NSString *)arg1 ;
-(NSArray *)columnNames;
-(BOOL)prepare;
-(id)initWithSQL:(id)arg1 database:(id)arg2 ;
@end

