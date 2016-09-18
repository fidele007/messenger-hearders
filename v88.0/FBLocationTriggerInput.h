/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:04 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString, FBPulsarScan, FBViewerCoordinates, FBLocationTriggerWifiData;

@interface FBLocationTriggerInput : FBGraphQLInput {

	NSString* _checkinPlaceId;
	FBPulsarScan* _bluetoothScan;
	FBViewerCoordinates* _viewerCoordinates;
	FBLocationTriggerWifiData* _wifiData;
	NSString* _triggerSource;

}

@property (nonatomic,copy) NSString * checkinPlaceId;                            //@synthesize checkinPlaceId=_checkinPlaceId - In the implementation block
@property (nonatomic,copy) FBPulsarScan * bluetoothScan;                         //@synthesize bluetoothScan=_bluetoothScan - In the implementation block
@property (nonatomic,copy) FBViewerCoordinates * viewerCoordinates;              //@synthesize viewerCoordinates=_viewerCoordinates - In the implementation block
@property (nonatomic,copy) FBLocationTriggerWifiData * wifiData;                 //@synthesize wifiData=_wifiData - In the implementation block
@property (nonatomic,copy) NSString * triggerSource;                             //@synthesize triggerSource=_triggerSource - In the implementation block
-(void)setViewerCoordinates:(FBViewerCoordinates *)arg1 ;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(FBViewerCoordinates *)viewerCoordinates;
-(NSString *)checkinPlaceId;
-(void)setCheckinPlaceId:(NSString *)arg1 ;
-(FBPulsarScan *)bluetoothScan;
-(void)setBluetoothScan:(FBPulsarScan *)arg1 ;
-(FBLocationTriggerWifiData *)wifiData;
-(void)setWifiData:(FBLocationTriggerWifiData *)arg1 ;
-(NSString *)triggerSource;
-(void)setTriggerSource:(NSString *)arg1 ;
@end

