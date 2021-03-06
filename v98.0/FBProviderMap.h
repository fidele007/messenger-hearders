/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:13 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBProviding.h>

@class FBProviderScopedObjectRegister, FBProviderMapData;

@interface FBProviderMap : NSObject <FBProviding> {

	FBProviderScopedObjectRegister* _scopedObjectRegister;
	FBProviderMapData* _providerMapData;

}

@property (nonatomic,retain) FBProviderMapData * providerMapData;              //@synthesize providerMapData=_providerMapData - In the implementation block
-(id)scopedObjectRegister;
-(id)getInstance:(id)arg1 ;
-(id)getProvider:(id)arg1 ;
-(id)getInstance:(id)arg1 withIdentifier:(id)arg2 ;
-(id)initWithModules:(id)arg1 ;
-(id)getProvider:(id)arg1 withIdentifier:(id)arg2 ;
-(BOOL)hasProvider:(id)arg1 ;
-(FBProviderMapData *)providerMapData;
-(BOOL)hasProvider:(id)arg1 withIdentifier:(id)arg2 ;
-(BOOL)hasRegisteredProvider:(id)arg1 ;
-(BOOL)hasRegisteredProvider:(id)arg1 withIdentifier:(id)arg2 ;
-(void)setProviderMapData:(FBProviderMapData *)arg1 ;
@end

