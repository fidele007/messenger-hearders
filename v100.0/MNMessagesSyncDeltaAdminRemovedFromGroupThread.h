/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:52 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class MNMessagesSyncMessageMetadata, NSMutableArray, NSString;

@interface MNMessagesSyncDeltaAdminRemovedFromGroupThread : NSObject <TBase, NSCoding> {

	MNMessagesSyncMessageMetadata* __messageMetadata;
	NSMutableArray* __removedAdminFbIds;
	BOOL __messageMetadata_isset;
	BOOL __removedAdminFbIds_isset;

}

@property (setter=setMessageMetadata:,getter=messageMetadata,nonatomic,retain) MNMessagesSyncMessageMetadata * messageMetadata; 
@property (setter=setRemovedAdminFbIds:,getter=removedAdminFbIds,nonatomic,retain) NSMutableArray * removedAdminFbIds; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(MNMessagesSyncMessageMetadata *)messageMetadata;
-(BOOL)removedAdminFbIdsIsSet;
-(BOOL)messageMetadataIsSet;
-(NSMutableArray *)removedAdminFbIds;
-(void)setMessageMetadata:(MNMessagesSyncMessageMetadata *)arg1 ;
-(void)unsetMessageMetadata;
-(void)setRemovedAdminFbIds:(NSMutableArray *)arg1 ;
-(id)initWithMessageMetadata:(id)arg1 removedAdminFbIds:(id)arg2 ;
-(void)unsetRemovedAdminFbIds;
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

