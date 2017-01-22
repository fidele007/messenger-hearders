/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:21 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface FBWebrtcSsrcObject : NSObject <TBase, NSCoding> {

	int __ssrcId;
	NSString* __cname;
	NSString* __msid;
	NSString* __msidAppData;
	BOOL __ssrcId_isset;
	BOOL __cname_isset;
	BOOL __msid_isset;
	BOOL __msidAppData_isset;

}

@property (assign,setter=setSsrcId:,getter=ssrcId,nonatomic) int ssrcId; 
@property (setter=setCname:,getter=cname,nonatomic,retain) NSString * cname; 
@property (setter=setMsid:,getter=msid,nonatomic,retain) NSString * msid; 
@property (setter=setMsidAppData:,getter=msidAppData,nonatomic,retain) NSString * msidAppData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(void)setSsrcId:(int)arg1 ;
-(void)setMsid:(NSString *)arg1 ;
-(void)setMsidAppData:(NSString *)arg1 ;
-(id)initWithSsrcId:(int)arg1 cname:(id)arg2 msid:(id)arg3 msidAppData:(id)arg4 ;
-(int)ssrcId;
-(BOOL)ssrcIdIsSet;
-(void)unsetSsrcId;
-(BOOL)cnameIsSet;
-(void)unsetCname;
-(NSString *)msid;
-(BOOL)msidIsSet;
-(void)unsetMsid;
-(NSString *)msidAppData;
-(BOOL)msidAppDataIsSet;
-(void)unsetMsidAppData;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(void)validate;
-(NSString *)cname;
-(void)setCname:(NSString *)arg1 ;
-(void)write:(id)arg1 ;
@end
