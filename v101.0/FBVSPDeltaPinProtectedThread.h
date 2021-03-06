/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:19 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSMutableArray, NSString;

@interface FBVSPDeltaPinProtectedThread : NSObject <TBase, NSCoding> {

	NSMutableArray* __protectedProfileIdsAdded;
	NSMutableArray* __protectedProfileIdsRemoved;
	NSMutableArray* __unprotectedProfileIdsAdded;
	NSMutableArray* __unprotectedProfileIdsRemoved;
	BOOL __protectedProfileIdsAdded_isset;
	BOOL __protectedProfileIdsRemoved_isset;
	BOOL __unprotectedProfileIdsAdded_isset;
	BOOL __unprotectedProfileIdsRemoved_isset;

}

@property (setter=setProtectedProfileIdsAdded:,getter=protectedProfileIdsAdded,nonatomic,retain) NSMutableArray * protectedProfileIdsAdded; 
@property (setter=setProtectedProfileIdsRemoved:,getter=protectedProfileIdsRemoved,nonatomic,retain) NSMutableArray * protectedProfileIdsRemoved; 
@property (setter=setUnprotectedProfileIdsAdded:,getter=unprotectedProfileIdsAdded,nonatomic,retain) NSMutableArray * unprotectedProfileIdsAdded; 
@property (setter=setUnprotectedProfileIdsRemoved:,getter=unprotectedProfileIdsRemoved,nonatomic,retain) NSMutableArray * unprotectedProfileIdsRemoved; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(void)setProtectedProfileIdsAdded:(NSMutableArray *)arg1 ;
-(void)setProtectedProfileIdsRemoved:(NSMutableArray *)arg1 ;
-(void)setUnprotectedProfileIdsAdded:(NSMutableArray *)arg1 ;
-(void)setUnprotectedProfileIdsRemoved:(NSMutableArray *)arg1 ;
-(id)initWithProtectedProfileIdsAdded:(id)arg1 protectedProfileIdsRemoved:(id)arg2 unprotectedProfileIdsAdded:(id)arg3 unprotectedProfileIdsRemoved:(id)arg4 ;
-(NSMutableArray *)protectedProfileIdsAdded;
-(BOOL)protectedProfileIdsAddedIsSet;
-(void)unsetProtectedProfileIdsAdded;
-(NSMutableArray *)protectedProfileIdsRemoved;
-(BOOL)protectedProfileIdsRemovedIsSet;
-(void)unsetProtectedProfileIdsRemoved;
-(NSMutableArray *)unprotectedProfileIdsAdded;
-(BOOL)unprotectedProfileIdsAddedIsSet;
-(void)unsetUnprotectedProfileIdsAdded;
-(NSMutableArray *)unprotectedProfileIdsRemoved;
-(BOOL)unprotectedProfileIdsRemovedIsSet;
-(void)unsetUnprotectedProfileIdsRemoved;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)validate;
-(void)write:(id)arg1 ;
@end

