<!-- START graphql-markdown -->

# Schema Types

<details>
  <summary><strong>Table of Contents</strong></summary>

  * [Query](#query)
  * [Mutation](#mutation)
  * [Objects](#objects)
    * [Address](#address)
    * [AddressStreetNumber](#addressstreetnumber)
    * [Agency](#agency)
    * [AirReservation](#airreservation)
    * [Airport](#airport)
    * [AlternateContact](#alternatecontact)
    * [AnalyticsEventsResult](#analyticseventsresult)
    * [Attribute](#attribute)
    * [Channel](#channel)
    * [CompanyName](#companyname)
    * [Coordinates](#coordinates)
    * [Country](#country)
    * [CreateTripResult](#createtripresult)
    * [CustomerLoyalty](#customerloyalty)
    * [DeepLink](#deeplink)
    * [DeleteMessageResult](#deletemessageresult)
    * [DepartureArrival](#departurearrival)
    * [Email](#email)
    * [ExternalUrl](#externalurl)
    * [Failure](#failure)
    * [Flight](#flight)
    * [FlightSegment](#flightsegment)
    * [GeoPoliticalArea](#geopoliticalarea)
    * [Geofence](#geofence)
    * [GetMessagePackResult](#getmessagepackresult)
    * [GetMessagesResult](#getmessagesresult)
    * [HospitalityReservation](#hospitalityreservation)
    * [Image](#image)
    * [IntermediateStop](#intermediatestop)
    * [LandingScreen](#landingscreen)
    * [Locator](#locator)
    * [MarkMessageResult](#markmessageresult)
    * [MessageCentreMessage](#messagecentremessage)
    * [MessagePackMessage](#messagepackmessage)
    * [NotificationPreference](#notificationpreference)
    * [NotificationPreferencesResult](#notificationpreferencesresult)
    * [PageInfo](#pageinfo)
    * [Passenger](#passenger)
    * [PassengerFlight](#passengerflight)
    * [PersonName](#personname)
    * [Property](#property)
    * [RailReservation](#railreservation)
    * [RegistrationResult](#registrationresult)
    * [RentalPickupReturn](#rentalpickupreturn)
    * [ReplaceTripResult](#replacetripresult)
    * [RoomAmenity](#roomamenity)
    * [RoomCharacteristics](#roomcharacteristics)
    * [RoomType](#roomtype)
    * [SendItineraryResult](#senditineraryresult)
    * [SendMessageResult](#sendmessageresult)
    * [StateProv](#stateprov)
    * [Telephone](#telephone)
    * [TextTitleAndDescription](#texttitleanddescription)
    * [TransferReservation](#transferreservation)
    * [TravelDocument](#traveldocument)
    * [Traveler](#traveler)
    * [TravelerRegistration](#travelerregistration)
    * [TravelerRegistrationConnection](#travelerregistrationconnection)
    * [TravelerRegistrationEdge](#travelerregistrationedge)
    * [Trip](#trip)
    * [UnregistrationResult](#unregistrationresult)
    * [VehicleDateLocation](#vehicledatelocation)
    * [VehicleMakeModel](#vehiclemakemodel)
    * [VehicleReservation](#vehiclereservation)
    * [VendorLocation](#vendorlocation)
  * [Inputs](#inputs)
    * [AddressInput](#addressinput)
    * [AgencyInput](#agencyinput)
    * [AirReservationInput](#airreservationinput)
    * [AnalyticsEventDefinition](#analyticseventdefinition)
    * [ChannelDefinition](#channeldefinition)
    * [ClickedEventInfo](#clickedeventinfo)
    * [FlightInput](#flightinput)
    * [FlightSegmentInput](#flightsegmentinput)
    * [GetMessagePackParams](#getmessagepackparams)
    * [GetMessagesParams](#getmessagesparams)
    * [HospitalityReservationInput](#hospitalityreservationinput)
    * [IntermediateStopInput](#intermediatestopinput)
    * [MessageDefinition](#messagedefinition)
    * [NotificationPreferenceDefinition](#notificationpreferencedefinition)
    * [PassengerFlightInput](#passengerflightinput)
    * [Payload](#payload)
    * [PersonNameInput](#personnameinput)
    * [RailReservationInput](#railreservationinput)
    * [Recipient](#recipient)
    * [SendItineraryDefinition](#senditinerarydefinition)
    * [TransferReservationInput](#transferreservationinput)
    * [TripInput](#tripinput)
    * [VehicleReservationInput](#vehiclereservationinput)
  * [Enums](#enums)
    * [AddressRole](#addressrole)
    * [AnalyticsEventsStatus](#analyticseventsstatus)
    * [Ancillary](#ancillary)
    * [Cabin](#cabin)
    * [ChannelType](#channeltype)
    * [CheckInStatus](#checkinstatus)
    * [DocTypeCode](#doctypecode)
    * [FlightStatus](#flightstatus)
    * [FlightType](#flighttype)
    * [Gender](#gender)
    * [GeoPoliticalAreaLevel](#geopoliticalarealevel)
    * [GeofenceTransition](#geofencetransition)
    * [MessageActionType](#messageactiontype)
    * [MessageStatus](#messagestatus)
    * [MessagingEventCode](#messagingeventcode)
    * [OptInStatus](#optinstatus)
    * [RecipientType](#recipienttype)
    * [RegistrationStatus](#registrationstatus)
    * [ReservationSource](#reservationsource)
    * [ReservationStatus](#reservationstatus)
    * [Role](#role)
    * [RoomAmenityQuality](#roomamenityquality)
    * [SendItineraryStatus](#senditinerarystatus)
    * [SendMessageStatus](#sendmessagestatus)
    * [SortOrder](#sortorder)
    * [TelephoneRole](#telephonerole)
    * [TransmissionType](#transmissiontype)
    * [TriggerType](#triggertype)
    * [UnregistrationStatus](#unregistrationstatus)
    * [VehicleClass](#vehicleclass)
    * [VehicleFuelType](#vehiclefueltype)
    * [YesNoInherit](#yesnoinherit)
    * [YesNoUnknown](#yesnounknown)
  * [Scalars](#scalars)
    * [Boolean](#boolean)
    * [Date](#date)
    * [DateTime](#datetime)
    * [DateTimeOffset](#datetimeoffset)
    * [Float](#float)
    * [ID](#id)
    * [Int](#int)
    * [String](#string)
    * [agencyId](#agencyid)
    * [arrivalAirport](#arrivalairport)
    * [assistancePhone](#assistancephone)
    * [birthCountry](#birthcountry)
    * [birthDate](#birthdate)
    * [birthPlace](#birthplace)
    * [bldgRoom](#bldgroom)
    * [bookingReference](#bookingreference)
    * [carrier](#carrier)
    * [carrierName](#carriername)
    * [city](#city)
    * [cityCode](#citycode)
    * [classOfService](#classofservice)
    * [corporateId](#corporateid)
    * [counterLocationCode](#counterlocationcode)
    * [countryCode](#countrycode)
    * [countryName](#countryname)
    * [county](#county)
    * [departureAirport](#departureairport)
    * [departureGate](#departuregate)
    * [departureTerminal](#departureterminal)
    * [docNumber](#docnumber)
    * [doorCount](#doorcount)
    * [equipment](#equipment)
    * [fareBasisCode](#farebasiscode)
    * [given](#given)
    * [guests](#guests)
    * [issueCountry](#issuecountry)
    * [name](#name)
    * [nationality](#nationality)
    * [number](#number)
    * [operatingCarrier](#operatingcarrier)
    * [operatingCarrierName](#operatingcarriername)
    * [pcc](#pcc)
    * [postalCode](#postalcode)
    * [propertyChainCode](#propertychaincode)
    * [propertyChainName](#propertychainname)
    * [propertyName](#propertyname)
    * [propertyTelephone](#propertytelephone)
    * [provider](#provider)
    * [railOperator](#railoperator)
    * [residence](#residence)
    * [roomDescription](#roomdescription)
    * [seat](#seat)
    * [seatNumber](#seatnumber)
    * [seatQuantity](#seatquantity)
    * [stateProv](#stateprov)
    * [stateProvCode](#stateprovcode)
    * [street](#street)
    * [streetNumber](#streetnumber)
    * [surname](#surname)
    * [ticket](#ticket)
    * [traveler](#traveler)
    * [value](#value)
    * [vehicleCategoryCode](#vehiclecategorycode)
    * [vehicleLocation](#vehiclelocation)
    * [vehicleMake](#vehiclemake)
    * [vehicleModel](#vehiclemodel)
    * [vehicleSizeCode](#vehiclesizecode)
    * [vendor](#vendor)
  * [Interfaces](#interfaces)
    * [MessageAction](#messageaction)
    * [Reservation](#reservation)

</details>

## Query
<table>
<thead>
<tr>
<th align="left">Field</th>
<th align="right">Argument</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>status</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>registeredTravelers</strong></td>
<td valign="top"><a href="#travelerregistrationconnection">TravelerRegistrationConnection</a></td>
<td>

Retrieve traveler registrations for a customer.
Auth required: SYSTEM

</td>
</tr>
<tr>
<td colspan="2" align="right" valign="top">first</td>
<td valign="top"><a href="#int">Int</a></td>
<td></td>
</tr>
<tr>
<td colspan="2" align="right" valign="top">after</td>
<td valign="top"><a href="#string">String</a></td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>getTrips</strong></td>
<td valign="top">[<a href="#trip">Trip</a>]</td>
<td>

Retrieve trips for a Traveler.
Auth required: SYSTEM

</td>
</tr>
<tr>
<td colspan="2" align="right" valign="top">traveler</td>
<td valign="top"><a href="#string">String</a>!</td>
<td>

Traveler identifier (an email address)

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>getTrip</strong></td>
<td valign="top">[<a href="#trip">Trip</a>]</td>
<td>

+  Retrieves a trip for a traveler.
+  Auth required: System
+  

</td>
</tr>
<tr>
<td colspan="2" align="right" valign="top">bookingReference</td>
<td valign="top"><a href="#string">String</a>!</td>
<td></td>
</tr>
<tr>
<td colspan="2" align="right" valign="top">traveler</td>
<td valign="top"><a href="#string">String</a>!</td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>getMessages</strong></td>
<td valign="top"><a href="#getmessagesresult">GetMessagesResult</a></td>
<td>

Returns Messages for a given user sorted by date.
Auth required: MESSAGING

</td>
</tr>
<tr>
<td colspan="2" align="right" valign="top">params</td>
<td valign="top"><a href="#getmessagesparams">GetMessagesParams</a>!</td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>getMessagePack</strong></td>
<td valign="top"><a href="#getmessagepackresult">GetMessagePackResult</a></td>
<td>

Returns a message pack for a given user based on trip, rule and inbox information.
Auth required: MESSAGING

</td>
</tr>
<tr>
<td colspan="2" align="right" valign="top">params</td>
<td valign="top"><a href="#getmessagepackparams">GetMessagePackParams</a>!</td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>getNotificationPreferences</strong></td>
<td valign="top"><a href="#notificationpreferencesresult">NotificationPreferencesResult</a></td>
<td>

Returns the notification preferences across all channels.
Auth required: MESSAGING

</td>
</tr>
</tbody>
</table>

## Mutation
<table>
<thead>
<tr>
<th align="left">Field</th>
<th align="right">Argument</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>createTrip</strong></td>
<td valign="top"><a href="#createtripresult">CreateTripResult</a>!</td>
<td>

Create a Trip and save to the Tripstore.
Auth required: SYSTEM

</td>
</tr>
<tr>
<td colspan="2" align="right" valign="top">trip</td>
<td valign="top"><a href="#tripinput">TripInput</a>!</td>
<td>

A single Trip for a Traveler

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>replaceTrip</strong></td>
<td valign="top"><a href="#replacetripresult">ReplaceTripResult</a>!</td>
<td>

Replace a Trip in the Tripstore.
Auth required: SYSTEM

</td>
</tr>
<tr>
<td colspan="2" align="right" valign="top">trip</td>
<td valign="top"><a href="#tripinput">TripInput</a>!</td>
<td>

A single Trip for a Traveler

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>registerChannel</strong></td>
<td valign="top"><a href="#registrationresult">RegistrationResult</a></td>
<td>

Register on a channel to receive notifications.
Auth required: MESSAGING

</td>
</tr>
<tr>
<td colspan="2" align="right" valign="top">channelDefinition</td>
<td valign="top"><a href="#channeldefinition">ChannelDefinition</a>!</td>
<td>

the details of channel

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>unregisterChannel</strong></td>
<td valign="top"><a href="#unregistrationresult">UnregistrationResult</a></td>
<td>

Unregister from a channel to stop receiving notifications.
Auth required: MESSAGING

</td>
</tr>
<tr>
<td colspan="2" align="right" valign="top">type</td>
<td valign="top"><a href="#channeltype">ChannelType</a>!</td>
<td>

the type of channel (e.g. APNS, FCM etc)

</td>
</tr>
<tr>
<td colspan="2" align="right" valign="top">address</td>
<td valign="top"><a href="#string">String</a></td>
<td>

unique address (e.g. APNs device token, FCM registration, email address etc). For Message Centre channel the address may be omitted

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>modifyNotificationPreferences</strong></td>
<td valign="top"><a href="#notificationpreferencesresult">NotificationPreferencesResult</a></td>
<td>

Modify notification preference across all channels. Only the specified notifications preferences are updated, any existing notification preferences not targeted by the request remain unchanged.
Auth required: MESSAGING

</td>
</tr>
<tr>
<td colspan="2" align="right" valign="top">preferences</td>
<td valign="top">[<a href="#notificationpreferencedefinition">NotificationPreferenceDefinition</a>!]!</td>
<td>

an array of notification preferences to be modified

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>markMessagesAsRead</strong></td>
<td valign="top"><a href="#markmessageresult">MarkMessageResult</a></td>
<td>

Mark one or more messages as READ.
Auth required: MESSAGING

</td>
</tr>
<tr>
<td colspan="2" align="right" valign="top">messageIds</td>
<td valign="top">[<a href="#string">String</a>!]!</td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>markMessagesAsUnread</strong></td>
<td valign="top"><a href="#markmessageresult">MarkMessageResult</a></td>
<td>

Mark one or more messages as UNREAD.
Auth required: MESSAGING

</td>
</tr>
<tr>
<td colspan="2" align="right" valign="top">messageIds</td>
<td valign="top">[<a href="#string">String</a>!]!</td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>deleteMessages</strong></td>
<td valign="top"><a href="#deletemessageresult">DeleteMessageResult</a></td>
<td>

Delete one or more messages.
Auth required: MESSAGING

</td>
</tr>
<tr>
<td colspan="2" align="right" valign="top">messageIds</td>
<td valign="top">[<a href="#string">String</a>!]!</td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>sendAnalyticsEvents</strong></td>
<td valign="top"><a href="#analyticseventsresult">AnalyticsEventsResult</a></td>
<td>

Store analytics events.
Auth required: ANALYTICS

</td>
</tr>
<tr>
<td colspan="2" align="right" valign="top">events</td>
<td valign="top">[<a href="#analyticseventdefinition">AnalyticsEventDefinition</a>!]!</td>
<td>

an array of analytic events to be stored

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>sendItinerary</strong></td>
<td valign="top"><a href="#senditineraryresult">SendItineraryResult</a></td>
<td>

Send itinerary to a user.
Auth required: SYSTEM

</td>
</tr>
<tr>
<td colspan="2" align="right" valign="top">sendItineraryDetails</td>
<td valign="top"><a href="#senditinerarydefinition">SendItineraryDefinition</a>!</td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>sendMessage</strong></td>
<td valign="top"><a href="#sendmessageresult">SendMessageResult</a></td>
<td>

Send message directly to one or more users
Auth required: SYSTEM

</td>
</tr>
<tr>
<td colspan="2" align="right" valign="top">message</td>
<td valign="top"><a href="#messagedefinition">MessageDefinition</a>!</td>
<td></td>
</tr>
</tbody>
</table>

## Objects

### Address

Provides address information.

<table>
<thead>
<tr>
<th align="left">Field</th>
<th align="right">Argument</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>AddressStreetNumber</strong></td>
<td valign="top"><a href="#addressstreetnumber">AddressStreetNumber</a></td>
<td>

Address street detail

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>addressLine1</strong></td>
<td valign="top"><a href="#string">String</a>!</td>
<td>

Address Line 1

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>addressLine2</strong></td>
<td valign="top"><a href="#string">String</a>!</td>
<td>

Address Line 2

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>addressLine3</strong></td>
<td valign="top"><a href="#string">String</a>!</td>
<td>

Address Line 3

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>addressLine4</strong></td>
<td valign="top"><a href="#string">String</a>!</td>
<td>

Address Line 4

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>city</strong></td>
<td valign="top"><a href="#string">String</a>!</td>
<td>

City (e.g., Dublin), town, or postal station (i.e., a postal service territory, often used in a military address).

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>county</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td>

County or Region Name (e.g., Fairfax).

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>stateProv</strong></td>
<td valign="top"><a href="#stateprov">StateProv</a></td>
<td>

The standard code or abbreviation for the state, province, or region with optional name

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>country</strong></td>
<td valign="top"><a href="#country">Country</a></td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>postalCode</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td>

Post Office Code number.

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>timezone</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td>

Address timezone

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>coordinates</strong></td>
<td valign="top"><a href="#coordinates">Coordinates</a></td>
<td>

Address geo-coordinates

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>role</strong></td>
<td valign="top"><a href="#addressrole">AddressRole</a></td>
<td>

Role of this Address

</td>
</tr>
</tbody>
</table>

### AddressStreetNumber

The street number alone is the numerical number that precedes the street name in the address

<table>
<thead>
<tr>
<th align="left">Field</th>
<th align="right">Argument</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>value</strong></td>
<td valign="top"><a href="#string">String</a>!</td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>streetNmbrSuffix</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>streetDirection</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>ruralRouteNmbr</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>postOfficeBox</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td></td>
</tr>
</tbody>
</table>

### Agency

A travel agency

<table>
<thead>
<tr>
<th align="left">Field</th>
<th align="right">Argument</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>agencyId</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td>

An Agency identifier

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>pcc</strong></td>
<td valign="top"><a href="#string">String</a>!</td>
<td>

Identifies the PCC for which the API is being called

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>name</strong></td>
<td valign="top"><a href="#string">String</a>!</td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>address</strong></td>
<td valign="top"><a href="#address">Address</a>!</td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>assistancePhone</strong></td>
<td valign="top"><a href="#string">String</a>!</td>
<td></td>
</tr>
</tbody>
</table>

### AirReservation

Air reservation

<table>
<thead>
<tr>
<th align="left">Field</th>
<th align="right">Argument</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>locator</strong></td>
<td valign="top"><a href="#locator">Locator</a>!</td>
<td>

Contains the locator (PNR or external locator) or cancellation number for
the reservation, order, or offer

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>status</strong></td>
<td valign="top"><a href="#reservationstatus">ReservationStatus</a>!</td>
<td>

Status of this reservation

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>totalDuration</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td>

Total duration of all Segments that are part of this reservation

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>flightSegments</strong></td>
<td valign="top">[<a href="#flightsegment">FlightSegment</a>!]!</td>
<td>

List of flight segments in this reservation

</td>
</tr>
</tbody>
</table>

### Airport

Airport details

<table>
<thead>
<tr>
<th align="left">Field</th>
<th align="right">Argument</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>location</strong></td>
<td valign="top"><a href="#string">String</a>!</td>
<td>

Airport IATA location code

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>name</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td>

Name of the airport

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>address</strong></td>
<td valign="top"><a href="#address">Address</a></td>
<td>

Airport address

</td>
</tr>
</tbody>
</table>

### AlternateContact

<table>
<thead>
<tr>
<th align="left">Field</th>
<th align="right">Argument</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>contactType</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>relation</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>personName</strong></td>
<td valign="top"><a href="#personname">PersonName</a>!</td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>address</strong></td>
<td valign="top"><a href="#address">Address</a></td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>phone</strong></td>
<td valign="top"><a href="#telephone">Telephone</a></td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>email</strong></td>
<td valign="top"><a href="#email">Email</a></td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>emergencyInd</strong></td>
<td valign="top"><a href="#boolean">Boolean</a></td>
<td>

This is the contact in case of an emergency

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>defaultInd</strong></td>
<td valign="top"><a href="#boolean">Boolean</a></td>
<td>

This is the default contact

</td>
</tr>
</tbody>
</table>

### AnalyticsEventsResult

The result of storing analytics events

<table>
<thead>
<tr>
<th align="left">Field</th>
<th align="right">Argument</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>status</strong></td>
<td valign="top"><a href="#analyticseventsstatus">AnalyticsEventsStatus</a>!</td>
<td></td>
</tr>
</tbody>
</table>

### Attribute

<table>
<thead>
<tr>
<th align="left">Field</th>
<th align="right">Argument</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>key</strong></td>
<td valign="top"><a href="#string">String</a>!</td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>value</strong></td>
<td valign="top"><a href="#string">String</a>!</td>
<td></td>
</tr>
</tbody>
</table>

### Channel

Describes a notification channel

<table>
<thead>
<tr>
<th align="left">Field</th>
<th align="right">Argument</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>type</strong></td>
<td valign="top"><a href="#channeltype">ChannelType</a>!</td>
<td>

the type of channel (e.g. APNS, FCM etc)

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>address</strong></td>
<td valign="top"><a href="#string">String</a>!</td>
<td>

unique address (e.g. APNs device token, FCM registration, email address etc)

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>locale</strong></td>
<td valign="top"><a href="#string">String</a>!</td>
<td>

locale for the channel

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>appVersion</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td>

the version of the application that registered this channel

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>osVersion</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td>

the version of the OS that registered this channel

</td>
</tr>
</tbody>
</table>

### CompanyName

Identifies a company by name.

<table>
<thead>
<tr>
<th align="left">Field</th>
<th align="right">Argument</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>division</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>department</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>shortName</strong></td>
<td valign="top"><a href="#string">String</a>!</td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>code</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>codeContext</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td></td>
</tr>
</tbody>
</table>

### Coordinates

Geo-coordinates

<table>
<thead>
<tr>
<th align="left">Field</th>
<th align="right">Argument</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>latitude</strong></td>
<td valign="top"><a href="#float">Float</a>!</td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>longitude</strong></td>
<td valign="top"><a href="#float">Float</a>!</td>
<td></td>
</tr>
</tbody>
</table>

### Country

ISO 3166 code for a Country with optional name

<table>
<thead>
<tr>
<th align="left">Field</th>
<th align="right">Argument</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>value</strong></td>
<td valign="top"><a href="#string">String</a>!</td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>name</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>codeContext</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td></td>
</tr>
</tbody>
</table>

### CreateTripResult

Result of createTrip mutation

<table>
<thead>
<tr>
<th align="left">Field</th>
<th align="right">Argument</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>created</strong></td>
<td valign="top"><a href="#boolean">Boolean</a>!</td>
<td>

Indicates if the Trip was created in Tripstore

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>tripId</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td>

Unique identifier for Trip within Tripstore

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>bookingReference</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td>

A user enterable code to identify a Trip, such as a PNR number or other short alphanumeric code that is not a guid

</td>
</tr>
</tbody>
</table>

### CustomerLoyalty

Specifies the ID for the membership program.

<table>
<thead>
<tr>
<th align="left">Field</th>
<th align="right">Argument</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>value</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>priority</strong></td>
<td valign="top"><a href="#int">Int</a></td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>programId</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>programName</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>supplierType</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td>

Loyalty Supplier Type

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>supplier</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td>

Loyalty Supplier

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>tier</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>validatedInd</strong></td>
<td valign="top"><a href="#boolean">Boolean</a></td>
<td>

Customer loyalty number has been validated by the supplier

</td>
</tr>
</tbody>
</table>

### DeepLink

<table>
<thead>
<tr>
<th align="left">Field</th>
<th align="right">Argument</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>actionType</strong></td>
<td valign="top"><a href="#messageactiontype">MessageActionType</a>!</td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>attributes</strong></td>
<td valign="top">[<a href="#attribute">Attribute</a>]</td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>pageId</strong></td>
<td valign="top"><a href="#string">String</a>!</td>
<td></td>
</tr>
</tbody>
</table>

### DeleteMessageResult

The result of a modification of message status

<table>
<thead>
<tr>
<th align="left">Field</th>
<th align="right">Argument</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>deleted</strong></td>
<td valign="top">[<a href="#string">String</a>!]!</td>
<td>

an array of message ids that were deleted

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>failed</strong></td>
<td valign="top">[<a href="#failure">Failure</a>!]</td>
<td></td>
</tr>
</tbody>
</table>

### DepartureArrival

Airport Departure or Arrival details

<table>
<thead>
<tr>
<th align="left">Field</th>
<th align="right">Argument</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>location</strong></td>
<td valign="top"><a href="#airport">Airport</a>!</td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>dateTime</strong></td>
<td valign="top"><a href="#datetimeoffset">DateTimeOffset</a>!</td>
<td></td>
</tr>
</tbody>
</table>

### Email

Electronic email addresses, in IETF specified format.

<table>
<thead>
<tr>
<th align="left">Field</th>
<th align="right">Argument</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>value</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>emailType</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td>

Email Type OTACode

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>comment</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>preferredFormat</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>shareMarketing</strong></td>
<td valign="top"><a href="#yesnoinherit">YesNoInherit</a></td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>shareSync</strong></td>
<td valign="top"><a href="#yesnoinherit">YesNoInherit</a></td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>optOutInd</strong></td>
<td valign="top"><a href="#yesnoinherit">YesNoInherit</a></td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>optInStatus</strong></td>
<td valign="top"><a href="#optinstatus">OptInStatus</a></td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>optInDate</strong></td>
<td valign="top"><a href="#datetime">DateTime</a></td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>optOutDate</strong></td>
<td valign="top"><a href="#datetime">DateTime</a></td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>validInd</strong></td>
<td valign="top"><a href="#boolean">Boolean</a></td>
<td>

If true, this is a valid email address that has been system verified via a successful email transmission

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>provisionedInd</strong></td>
<td valign="top"><a href="#boolean">Boolean</a></td>
<td>

If true then the email address came from the provisioning process

</td>
</tr>
</tbody>
</table>

### ExternalUrl

<table>
<thead>
<tr>
<th align="left">Field</th>
<th align="right">Argument</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>actionType</strong></td>
<td valign="top"><a href="#messageactiontype">MessageActionType</a>!</td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>attributes</strong></td>
<td valign="top">[<a href="#attribute">Attribute</a>]</td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>webLink</strong></td>
<td valign="top"><a href="#string">String</a>!</td>
<td></td>
</tr>
</tbody>
</table>

### Failure

The result of a modification of message status

<table>
<thead>
<tr>
<th align="left">Field</th>
<th align="right">Argument</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>id</strong></td>
<td valign="top"><a href="#string">String</a>!</td>
<td>

an array of message ids that were deleted

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>reason</strong></td>
<td valign="top"><a href="#string">String</a>!</td>
<td></td>
</tr>
</tbody>
</table>

### Flight

Flight details

<table>
<thead>
<tr>
<th align="left">Field</th>
<th align="right">Argument</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>journeyType</strong></td>
<td valign="top"><a href="#flighttype">FlightType</a>!</td>
<td>

Type of Flight

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>distance</strong></td>
<td valign="top"><a href="#int">Int</a></td>
<td>

Optional Flight distance in Kilometers

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>stops</strong></td>
<td valign="top"><a href="#int">Int</a></td>
<td>

Number of stops in this segment (if there are any intermediate stops)

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>duration</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td>

Elapsed flight time in minutes

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>carrier</strong></td>
<td valign="top"><a href="#string">String</a>!</td>
<td>

Airline code for the Flight marketing carrier

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>carrierName</strong></td>
<td valign="top"><a href="#string">String</a>!</td>
<td>

Airline name for the Flight marketing carrier

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>number</strong></td>
<td valign="top"><a href="#string">String</a>!</td>
<td>

The Flight number

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>operatingCarrier</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td>

Airline code for the Flight operating carrier

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>operatingCarrierName</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td>

Airline name for the Flight operating carrier

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>equipment</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td>

Identifies the Aircraft (AirEquipCodeIATA)

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>departure</strong></td>
<td valign="top"><a href="#departurearrival">DepartureArrival</a>!</td>
<td>

Airport departure details

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>departureTerminal</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td>

Airport departure terminal

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>departureGate</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td>

Airport departure gate

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>arrival</strong></td>
<td valign="top"><a href="#departurearrival">DepartureArrival</a>!</td>
<td>

Airport arrival details

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>intermediateStops</strong></td>
<td valign="top">[<a href="#intermediatestop">IntermediateStop</a>!]</td>
<td>

List of intermediate stops in this segment

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>status</strong></td>
<td valign="top"><a href="#flightstatus">FlightStatus</a></td>
<td>

Status of the flight

</td>
</tr>
</tbody>
</table>

### FlightSegment

Flight segment

<table>
<thead>
<tr>
<th align="left">Field</th>
<th align="right">Argument</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>sequence</strong></td>
<td valign="top"><a href="#int">Int</a></td>
<td>

Optional sequence number used for sorting segments

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>segmentGroup</strong></td>
<td valign="top"><a href="#int">Int</a></td>
<td>

Optional number used for grouping connected/married flight segments

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>connectionDuration</strong></td>
<td valign="top"><a href="#string">String</a>!</td>
<td>

The actual duration (in minutes) between segments.

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>flight</strong></td>
<td valign="top"><a href="#flight">Flight</a>!</td>
<td>

Flight details for this segments

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>boundFlightsInd</strong></td>
<td valign="top"><a href="#boolean">Boolean</a></td>
<td>

If present and true, the Segments in this Connection must be sold and cancelled together

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>passengers</strong></td>
<td valign="top">[<a href="#passengerflight">PassengerFlight</a>]</td>
<td>

List of passengers for this Flight segment

</td>
</tr>
</tbody>
</table>

### GeoPoliticalArea

The location code of the geographical location.

<table>
<thead>
<tr>
<th align="left">Field</th>
<th align="right">Argument</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>value</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>level</strong></td>
<td valign="top"><a href="#geopoliticalarealevel">GeoPoliticalAreaLevel</a></td>
<td></td>
</tr>
</tbody>
</table>

### Geofence

<table>
<thead>
<tr>
<th align="left">Field</th>
<th align="right">Argument</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>id</strong></td>
<td valign="top"><a href="#string">String</a>!</td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>radius</strong></td>
<td valign="top"><a href="#int">Int</a>!</td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>latitude</strong></td>
<td valign="top"><a href="#float">Float</a>!</td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>longitude</strong></td>
<td valign="top"><a href="#float">Float</a>!</td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>validFrom</strong></td>
<td valign="top"><a href="#datetime">DateTime</a>!</td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>validTo</strong></td>
<td valign="top"><a href="#datetime">DateTime</a>!</td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>transitions</strong></td>
<td valign="top">[<a href="#geofencetransition">GeofenceTransition</a>!]!</td>
<td></td>
</tr>
</tbody>
</table>

### GetMessagePackResult

<table>
<thead>
<tr>
<th align="left">Field</th>
<th align="right">Argument</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>messages</strong></td>
<td valign="top">[<a href="#messagepackmessage">MessagePackMessage</a>!]!</td>
<td></td>
</tr>
</tbody>
</table>

### GetMessagesResult

<table>
<thead>
<tr>
<th align="left">Field</th>
<th align="right">Argument</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>messages</strong></td>
<td valign="top">[<a href="#messagecentremessage">MessageCentreMessage</a>!]!</td>
<td></td>
</tr>
</tbody>
</table>

### HospitalityReservation

Hospitality (e.g. Hotel) reservation

<table>
<thead>
<tr>
<th align="left">Field</th>
<th align="right">Argument</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>locator</strong></td>
<td valign="top"><a href="#locator">Locator</a>!</td>
<td>

A user enterable code to identify a reservation, such as a PNR number or other short alphanumeric code that is not a guid

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>reservationDate</strong></td>
<td valign="top"><a href="#datetime">DateTime</a>!</td>
<td>

Date and Time the reservation was created

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>status</strong></td>
<td valign="top"><a href="#reservationstatus">ReservationStatus</a>!</td>
<td>

Status of the reservation

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>guests</strong></td>
<td valign="top"><a href="#int">Int</a>!</td>
<td>

Total number of guests

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>property</strong></td>
<td valign="top"><a href="#property">Property</a>!</td>
<td>

Property details

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>roomType</strong></td>
<td valign="top"><a href="#roomtype">RoomType</a></td>
<td>

Type of room reserved

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>nameOfMainGuest</strong></td>
<td valign="top"><a href="#personname">PersonName</a>!</td>
<td>

Name of main (primary) guest

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>checkIn</strong></td>
<td valign="top"><a href="#datetimeoffset">DateTimeOffset</a>!</td>
<td>

Check-in Date and Time

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>checkOut</strong></td>
<td valign="top"><a href="#datetimeoffset">DateTimeOffset</a>!</td>
<td>

Check-out Date and Time

</td>
</tr>
</tbody>
</table>

### Image

<table>
<thead>
<tr>
<th align="left">Field</th>
<th align="right">Argument</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>name</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>url</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td></td>
</tr>
</tbody>
</table>

### IntermediateStop

An intermediate stop location and duration

<table>
<thead>
<tr>
<th align="left">Field</th>
<th align="right">Argument</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>value</strong></td>
<td valign="top"><a href="#string">String</a>!</td>
<td>

IATA airport code

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>duration</strong></td>
<td valign="top"><a href="#string">String</a>!</td>
<td>

Duration stopped at this location

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>equipment</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td>

Identifies the Aircraft (AirEquipCodeIATA)

</td>
</tr>
</tbody>
</table>

### LandingScreen

<table>
<thead>
<tr>
<th align="left">Field</th>
<th align="right">Argument</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>actionType</strong></td>
<td valign="top"><a href="#messageactiontype">MessageActionType</a>!</td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>attributes</strong></td>
<td valign="top">[<a href="#attribute">Attribute</a>]</td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>template</strong></td>
<td valign="top"><a href="#string">String</a>!</td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>title</strong></td>
<td valign="top"><a href="#string">String</a>!</td>
<td></td>
</tr>
</tbody>
</table>

### Locator

Contains the locator (PNR or external locator) or cancellation number for the reservation, order, or offer

<table>
<thead>
<tr>
<th align="left">Field</th>
<th align="right">Argument</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>value</strong></td>
<td valign="top"><a href="#string">String</a>!</td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>type</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>source</strong></td>
<td valign="top"><a href="#reservationsource">ReservationSource</a>!</td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>sourceContext</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>otaType</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td></td>
</tr>
</tbody>
</table>

### MarkMessageResult

The result of a modification of message status

<table>
<thead>
<tr>
<th align="left">Field</th>
<th align="right">Argument</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>modified</strong></td>
<td valign="top">[<a href="#string">String</a>]!</td>
<td>

an array of message ids that were modified

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>unmodified</strong></td>
<td valign="top">[<a href="#string">String</a>]!</td>
<td>

an array of message ids that were not modified e.g. the message already had the required status

</td>
</tr>
</tbody>
</table>

### MessageCentreMessage

<table>
<thead>
<tr>
<th align="left">Field</th>
<th align="right">Argument</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>id</strong></td>
<td valign="top"><a href="#string">String</a>!</td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>text</strong></td>
<td valign="top"><a href="#string">String</a>!</td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>status</strong></td>
<td valign="top"><a href="#messagestatus">MessageStatus</a>!</td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>createdAt</strong></td>
<td valign="top"><a href="#datetime">DateTime</a>!</td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>updatedAt</strong></td>
<td valign="top"><a href="#datetime">DateTime</a>!</td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>locale</strong></td>
<td valign="top"><a href="#string">String</a>!</td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>title</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>subtitle</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>image</strong></td>
<td valign="top"><a href="#image">Image</a></td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>action</strong></td>
<td valign="top"><a href="#messageaction">MessageAction</a></td>
<td></td>
</tr>
</tbody>
</table>

### MessagePackMessage

<table>
<thead>
<tr>
<th align="left">Field</th>
<th align="right">Argument</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>id</strong></td>
<td valign="top"><a href="#string">String</a>!</td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>text</strong></td>
<td valign="top"><a href="#string">String</a>!</td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>displayWhenLocationUnknown</strong></td>
<td valign="top"><a href="#boolean">Boolean</a>!</td>
<td>

Flag that will determine if a message should be displayed when location is unknown.
True if message should be displayed when location is unknown, false otherwise.

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>title</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>subtitle</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>image</strong></td>
<td valign="top"><a href="#image">Image</a></td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>geofences</strong></td>
<td valign="top">[<a href="#geofence">Geofence</a>!]!</td>
<td></td>
</tr>
</tbody>
</table>

### NotificationPreference

Describes the current status for a notification preference

<table>
<thead>
<tr>
<th align="left">Field</th>
<th align="right">Argument</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>name</strong></td>
<td valign="top"><a href="#string">String</a>!</td>
<td>

the name for the notification preference (e.g. 'Promotions', 'Travel Alerts')

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>enabled</strong></td>
<td valign="top"><a href="#boolean">Boolean</a>!</td>
<td>

true to enable these types of notifications, false to disable

</td>
</tr>
</tbody>
</table>

### NotificationPreferencesResult

The result of a modification of notification preferences

<table>
<thead>
<tr>
<th align="left">Field</th>
<th align="right">Argument</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>preferences</strong></td>
<td valign="top">[<a href="#notificationpreference">NotificationPreference</a>!]!</td>
<td>

the complete set of notification preferences

</td>
</tr>
</tbody>
</table>

### PageInfo

Information about pagination in a connection.

<table>
<thead>
<tr>
<th align="left">Field</th>
<th align="right">Argument</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>hasNextPage</strong></td>
<td valign="top"><a href="#boolean">Boolean</a></td>
<td>

True if there are any additional items.

</td>
</tr>
</tbody>
</table>

### Passenger

Passenger details

<table>
<thead>
<tr>
<th align="left">Field</th>
<th align="right">Argument</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>index</strong></td>
<td valign="top"><a href="#int">Int</a>!</td>
<td>

Passenger index number

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>passengerTypeCode</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td>

Type code

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>name</strong></td>
<td valign="top"><a href="#string">String</a>!</td>
<td>

Passenger name

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>infant</strong></td>
<td valign="top"><a href="#boolean">Boolean</a>!</td>
<td>

Infant passenger indicator

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>traveler</strong></td>
<td valign="top"><a href="#traveler">Traveler</a></td>
<td>

Traveler details

</td>
</tr>
</tbody>
</table>

### PassengerFlight

Passenger on a Flight

<table>
<thead>
<tr>
<th align="left">Field</th>
<th align="right">Argument</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>passenger</strong></td>
<td valign="top"><a href="#passenger">Passenger</a>!</td>
<td>

Passenger details

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>classOfService</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td>

Class of service code

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>cabin</strong></td>
<td valign="top"><a href="#cabin">Cabin</a></td>
<td>

Cabin type indicator

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>fareBasisCode</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td>

Basis of fare code

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>privateFareInd</strong></td>
<td valign="top"><a href="#boolean">Boolean</a></td>
<td>

if present and true, this is a private fare

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>ticket</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td>

Passenger ticket number

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>seat</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td>

Passenger seat number

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>ancillaries</strong></td>
<td valign="top">[<a href="#ancillary">Ancillary</a>!]</td>
<td>

List of ancillaries

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>checkInStatus</strong></td>
<td valign="top"><a href="#checkinstatus">CheckInStatus</a></td>
<td>

Passenger check-in status

</td>
</tr>
</tbody>
</table>

### PersonName

A Person's name

<table>
<thead>
<tr>
<th align="left">Field</th>
<th align="right">Argument</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>prefix</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>given</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>middle</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>surname</strong></td>
<td valign="top"><a href="#string">String</a>!</td>
<td></td>
</tr>
</tbody>
</table>

### Property

<table>
<thead>
<tr>
<th align="left">Field</th>
<th align="right">Argument</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>chainCode</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>propertyCode</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>propertyName</strong></td>
<td valign="top"><a href="#string">String</a>!</td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>location</strong></td>
<td valign="top"><a href="#address">Address</a></td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>telephone</strong></td>
<td valign="top"><a href="#telephone">Telephone</a></td>
<td></td>
</tr>
</tbody>
</table>

### RailReservation

A Rail reservation

<table>
<thead>
<tr>
<th align="left">Field</th>
<th align="right">Argument</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>locator</strong></td>
<td valign="top"><a href="#locator">Locator</a>!</td>
<td>

A user enterable code to identify a reservation, such as a PNR number or other short alphanumeric code that is not a guid

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>reservationDate</strong></td>
<td valign="top"><a href="#datetime">DateTime</a>!</td>
<td>

Date and Time the reservation was created

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>status</strong></td>
<td valign="top"><a href="#reservationstatus">ReservationStatus</a>!</td>
<td>

Status of the reservation

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>railOperator</strong></td>
<td valign="top"><a href="#string">String</a>!</td>
<td>

Operator name

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>departureStation</strong></td>
<td valign="top"><a href="#address">Address</a>!</td>
<td>

Departure station address

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>arrivalStation</strong></td>
<td valign="top"><a href="#address">Address</a></td>
<td>

Arrival station address

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>seatQuantity</strong></td>
<td valign="top"><a href="#int">Int</a></td>
<td>

Number of reserved seats

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>seatNumber</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td>

Assigned seat of main (primary) passenger

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>firstClass</strong></td>
<td valign="top"><a href="#boolean">Boolean</a></td>
<td>

Seat class indicator

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>nameOfMainPassenger</strong></td>
<td valign="top"><a href="#personname">PersonName</a>!</td>
<td>

Name of the main (primary) passenger

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>departs</strong></td>
<td valign="top"><a href="#datetimeoffset">DateTimeOffset</a>!</td>
<td>

Train departure Date and Time

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>arrives</strong></td>
<td valign="top"><a href="#datetimeoffset">DateTimeOffset</a></td>
<td>

Train arrival Date and Time

</td>
</tr>
</tbody>
</table>

### RegistrationResult

The result of a channel registration

<table>
<thead>
<tr>
<th align="left">Field</th>
<th align="right">Argument</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>status</strong></td>
<td valign="top"><a href="#registrationstatus">RegistrationStatus</a>!</td>
<td>

the result of the registration request

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>channel</strong></td>
<td valign="top"><a href="#channel">Channel</a></td>
<td>

details of the registered channel

</td>
</tr>
</tbody>
</table>

### RentalPickupReturn

Pickup or retrun information - datetime and the location

<table>
<thead>
<tr>
<th align="left">Field</th>
<th align="right">Argument</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>dateTime</strong></td>
<td valign="top"><a href="#datetimeoffset">DateTimeOffset</a>!</td>
<td>

The date and time of the pickup or return

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>vendorLocation</strong></td>
<td valign="top"><a href="#vendorlocation">VendorLocation</a></td>
<td></td>
</tr>
</tbody>
</table>

### ReplaceTripResult

Result of updateTrip mutation

<table>
<thead>
<tr>
<th align="left">Field</th>
<th align="right">Argument</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>replaced</strong></td>
<td valign="top"><a href="#boolean">Boolean</a>!</td>
<td>

Indicates if the Trip was created in Tripstore

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>tripId</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td>

Unique identifier for Trip within Tripstore

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>bookingReference</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td>

A user enterable code to identify a Trip, such as a PNR number or other short alphanumeric code that is not a guid

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>lastModified</strong></td>
<td valign="top"><a href="#datetime">DateTime</a>!</td>
<td>

Date and Time the Trip was last updated in Tripstore

</td>
</tr>
</tbody>
</table>

### RoomAmenity

Hotel room amenities

<table>
<thead>
<tr>
<th align="left">Field</th>
<th align="right">Argument</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>amenity</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td>

Room Amenity OTACode

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>quantity</strong></td>
<td valign="top"><a href="#int">Int</a></td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>qualityLevel</strong></td>
<td valign="top"><a href="#roomamenityquality">RoomAmenityQuality</a></td>
<td>

Used to designate the quality level of the Room Amenity e.g., premium, deluxe, standard, economy

</td>
</tr>
</tbody>
</table>

### RoomCharacteristics

Used to define a room (eg. its location, configuration, view)

<table>
<thead>
<tr>
<th align="left">Field</th>
<th align="right">Argument</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>typeCode</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>viewCode</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>bedTypeCode</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>category</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td>

Category OTACode

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>smokingAllowed</strong></td>
<td valign="top"><a href="#yesnounknown">YesNoUnknown</a></td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>wifiIncluded</strong></td>
<td valign="top"><a href="#yesnounknown">YesNoUnknown</a></td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>nonSmokingInd</strong></td>
<td valign="top"><a href="#boolean">Boolean</a></td>
<td></td>
</tr>
</tbody>
</table>

### RoomType

Provides details regarding rooms, usually guest rooms

<table>
<thead>
<tr>
<th align="left">Field</th>
<th align="right">Argument</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>characteristics</strong></td>
<td valign="top"><a href="#roomcharacteristics">RoomCharacteristics</a>!</td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>description</strong></td>
<td valign="top"><a href="#texttitleanddescription">TextTitleAndDescription</a>!</td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>roomAmenities</strong></td>
<td valign="top">[<a href="#roomamenity">RoomAmenity</a>!]!</td>
<td></td>
</tr>
</tbody>
</table>

### SendItineraryResult

<table>
<thead>
<tr>
<th align="left">Field</th>
<th align="right">Argument</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>status</strong></td>
<td valign="top"><a href="#senditinerarystatus">SendItineraryStatus</a>!</td>
<td></td>
</tr>
</tbody>
</table>

### SendMessageResult

The result of sending a message

<table>
<thead>
<tr>
<th align="left">Field</th>
<th align="right">Argument</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>status</strong></td>
<td valign="top"><a href="#sendmessagestatus">SendMessageStatus</a>!</td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>campaignName</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td>

the name of the campaign created to send the messages

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>targetedRecipientCount</strong></td>
<td valign="top"><a href="#int">Int</a></td>
<td>

the number of recipients targeted by this message

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>targetedRecipients</strong></td>
<td valign="top">[<a href="#string">String</a>!]</td>
<td>

the user ids of the recipients targeted by the message

</td>
</tr>
</tbody>
</table>

### StateProv

The standard code or abbreviation for the state, province, or region with optional name

<table>
<thead>
<tr>
<th align="left">Field</th>
<th align="right">Argument</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>value</strong></td>
<td valign="top"><a href="#string">String</a>!</td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>name</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td></td>
</tr>
</tbody>
</table>

### Telephone

Information about a telephone number, including the actual number and its usage.

<table>
<thead>
<tr>
<th align="left">Field</th>
<th align="right">Argument</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>countryAccessCode</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>areaCityCode</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>phoneNumber</strong></td>
<td valign="top"><a href="#string">String</a>!</td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>extension</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>cityCode</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>role</strong></td>
<td valign="top"><a href="#telephonerole">TelephoneRole</a></td>
<td></td>
</tr>
</tbody>
</table>

### TextTitleAndDescription

Descriptive Text and Title

<table>
<thead>
<tr>
<th align="left">Field</th>
<th align="right">Argument</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>value</strong></td>
<td valign="top"><a href="#string">String</a>!</td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>languages</strong></td>
<td valign="top">[<a href="#string">String</a>!]</td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>title</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td></td>
</tr>
</tbody>
</table>

### TransferReservation

Transfer segment input object

<table>
<thead>
<tr>
<th align="left">Field</th>
<th align="right">Argument</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>locator</strong></td>
<td valign="top"><a href="#locator">Locator</a>!</td>
<td>

A user enterable code to identify a reservation, such as a PNR number or other short alphanumeric code that is not a guid

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>status</strong></td>
<td valign="top"><a href="#reservationstatus">ReservationStatus</a>!</td>
<td>

Status of the reservation

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>passengerQuantity</strong></td>
<td valign="top"><a href="#int">Int</a></td>
<td>

Number of passengers

</td>
</tr>
</tbody>
</table>

### TravelDocument

Unique number assigned by authorities to document.

<table>
<thead>
<tr>
<th align="left">Field</th>
<th align="right">Argument</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>docNumber</strong></td>
<td valign="top"><a href="#docnumber">docNumber</a>!</td>
<td>

Document number
Min String Length : 1 , Max String Length : 128

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>docType</strong></td>
<td valign="top"><a href="#doctypecode">DocTypeCode</a></td>
<td>

Document Type OTA code

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>issueDate</strong></td>
<td valign="top"><a href="#date">Date</a></td>
<td>

Date of Issue

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>expireDate</strong></td>
<td valign="top"><a href="#date">Date</a></td>
<td>

Date of expiration

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>stateProvCode</strong></td>
<td valign="top"><a href="#stateprovcode">stateProvCode</a></td>
<td>

StateProvCode
Min String Length : 2 , Max String Length : 8

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>issueCountry</strong></td>
<td valign="top"><a href="#issuecountry">issueCountry</a></td>
<td>

CountryCodeISO
Min String Length : 2 , Max String Length : 2

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>birthDate</strong></td>
<td valign="top"><a href="#birthdate">birthDate</a></td>
<td>

The date of birth of the document holder
Min String Length : 0 , Max String Length : 20

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>birthCountry</strong></td>
<td valign="top"><a href="#birthcountry">birthCountry</a></td>
<td>

CountryCodeISO
Min String Length : 2 , Max String Length : 2

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>birthPlace</strong></td>
<td valign="top"><a href="#birthplace">birthPlace</a></td>
<td>

Document holders birth place
Min String Length : 0 , Max String Length : 128

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>residence</strong></td>
<td valign="top"><a href="#residence">residence</a></td>
<td>

Document holders residence
Min String Length : 0 , Max String Length : 512

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>gender</strong></td>
<td valign="top"><a href="#gender">Gender</a>!</td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>nationality</strong></td>
<td valign="top"><a href="#nationality">nationality</a>!</td>
<td>

Specifies a 2 character country code as defined in ISO3166
Min String Length : 2 , Max String Length : 2

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>personName</strong></td>
<td valign="top"><a href="#personname">PersonName</a>!</td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>isssuedForGeoPoliticalArea</strong></td>
<td valign="top"><a href="#geopoliticalarea">GeoPoliticalArea</a></td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>address</strong></td>
<td valign="top"><a href="#address">Address</a></td>
<td></td>
</tr>
</tbody>
</table>

### Traveler

A person that is traveling

<table>
<thead>
<tr>
<th align="left">Field</th>
<th align="right">Argument</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>uuid</strong></td>
<td valign="top"><a href="#id">ID</a>!</td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>dob</strong></td>
<td valign="top"><a href="#date">Date</a></td>
<td>

Date of Birth

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>gender</strong></td>
<td valign="top"><a href="#gender">Gender</a></td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>passengerTypeCode</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td>

Passenger Type Code

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>nationality</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td>

Nationality (ISO Country Code)

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>name</strong></td>
<td valign="top"><a href="#personname">PersonName</a>!</td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>address</strong></td>
<td valign="top"><a href="#address">Address</a></td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>phone</strong></td>
<td valign="top"><a href="#telephone">Telephone</a></td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>email</strong></td>
<td valign="top"><a href="#email">Email</a></td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>loyalty</strong></td>
<td valign="top">[<a href="#customerloyalty">CustomerLoyalty</a>!]</td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>alternateContact</strong></td>
<td valign="top"><a href="#alternatecontact">AlternateContact</a></td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>travelDocument</strong></td>
<td valign="top"><a href="#traveldocument">TravelDocument</a></td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>comments</strong></td>
<td valign="top">[<a href="#string">String</a>!]</td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>accompaniedByInfantInd</strong></td>
<td valign="top"><a href="#boolean">Boolean</a></td>
<td></td>
</tr>
</tbody>
</table>

### TravelerRegistration

A Registration for a Traveler

<table>
<thead>
<tr>
<th align="left">Field</th>
<th align="right">Argument</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>email</strong></td>
<td valign="top"><a href="#string">String</a>!</td>
<td>

Traveler Email identifier

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>creationDate</strong></td>
<td valign="top"><a href="#datetime">DateTime</a>!</td>
<td>

Date and Time the registration was created

</td>
</tr>
</tbody>
</table>

### TravelerRegistrationConnection

The connection type for TravelerRegistration.

<table>
<thead>
<tr>
<th align="left">Field</th>
<th align="right">Argument</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>edges</strong></td>
<td valign="top">[<a href="#travelerregistrationedge">TravelerRegistrationEdge</a>]</td>
<td>

A list of edges.

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>pageInfo</strong></td>
<td valign="top"><a href="#pageinfo">PageInfo</a></td>
<td>

Information to aid in pagination.

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>totalCount</strong></td>
<td valign="top"><a href="#int">Int</a></td>
<td>

Identifies the total count of items in the connection.

</td>
</tr>
</tbody>
</table>

### TravelerRegistrationEdge

An edge in a connection.

<table>
<thead>
<tr>
<th align="left">Field</th>
<th align="right">Argument</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>node</strong></td>
<td valign="top"><a href="#travelerregistration">TravelerRegistration</a></td>
<td>

The item at the end of the edge.

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>cursor</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td>

A cursor for use in pagination.

</td>
</tr>
</tbody>
</table>

### Trip

A Trip for a Traveler

<table>
<thead>
<tr>
<th align="left">Field</th>
<th align="right">Argument</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>id</strong></td>
<td valign="top"><a href="#id">ID</a>!</td>
<td>

Unique identifier for Trip within Tripstore

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>bookingReference</strong></td>
<td valign="top"><a href="#string">String</a>!</td>
<td>

A user enterable code to identify a Trip, such as a PNR number or other short alphanumeric code that is not a guid

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>reservationDate</strong></td>
<td valign="top"><a href="#datetime">DateTime</a>!</td>
<td>

Date and Time the Trip (or first itinerary reservation) was created

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>reservations</strong></td>
<td valign="top">[<a href="#reservation">Reservation</a>!]!</td>
<td>

List of reservations in this Trip

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>traveler</strong></td>
<td valign="top"><a href="#traveler">Traveler</a>!</td>
<td>

The Traveler (idenitifed by their email address)

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>corporateId</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td>

Corporate Identifier associated with this Trip and Traveler

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>bookingAgent</strong></td>
<td valign="top"><a href="#agency">Agency</a>!</td>
<td>

Travel Agent associated with this Trip

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>status</strong></td>
<td valign="top"><a href="#reservationstatus">ReservationStatus</a></td>
<td>

Status of the Trip

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>created</strong></td>
<td valign="top"><a href="#datetime">DateTime</a>!</td>
<td>

Date and Time the Trip was created in Tripstore

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>lastModified</strong></td>
<td valign="top"><a href="#datetime">DateTime</a>!</td>
<td>

Date and Time the Trip was last updated in Tripstore

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>clientVersion</strong></td>
<td valign="top"><a href="#int">Int</a>!</td>
<td>

Version of the trip

</td>
</tr>
</tbody>
</table>

### UnregistrationResult

The result of a channel unregistration

<table>
<thead>
<tr>
<th align="left">Field</th>
<th align="right">Argument</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>status</strong></td>
<td valign="top"><a href="#unregistrationstatus">UnregistrationStatus</a>!</td>
<td>

the result of the unregistration request

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>channel</strong></td>
<td valign="top"><a href="#channel">Channel</a></td>
<td>

details of the unregistred channel

</td>
</tr>
</tbody>
</table>

### VehicleDateLocation

<table>
<thead>
<tr>
<th align="left">Field</th>
<th align="right">Argument</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>pickup</strong></td>
<td valign="top"><a href="#rentalpickupreturn">RentalPickupReturn</a>!</td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>return</strong></td>
<td valign="top"><a href="#rentalpickupreturn">RentalPickupReturn</a>!</td>
<td></td>
</tr>
</tbody>
</table>

### VehicleMakeModel

The make and model of the vehicle along with an optional description

<table>
<thead>
<tr>
<th align="left">Field</th>
<th align="right">Argument</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>make</strong></td>
<td valign="top"><a href="#string">String</a>!</td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>model</strong></td>
<td valign="top"><a href="#string">String</a>!</td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>description</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td></td>
</tr>
</tbody>
</table>

### VehicleReservation

Car rental reservation

<table>
<thead>
<tr>
<th align="left">Field</th>
<th align="right">Argument</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>locator</strong></td>
<td valign="top"><a href="#locator">Locator</a>!</td>
<td>

A user enterable code to identify a reservation, such as a PNR number or other short alphanumeric code that is not a guid

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>status</strong></td>
<td valign="top"><a href="#reservationstatus">ReservationStatus</a>!</td>
<td>

Status of the reservation

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>vehicleCategoryCode</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td>

VEC code values from OTA 2011B descriptive code tables

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>vehicleClass</strong></td>
<td valign="top"><a href="#vehicleclass">VehicleClass</a></td>
<td>

The class of the car or other vehicle, such as intermediate, compact, full size

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>vehicleSizeCode</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td>

The size of the Vehicle. The OTA SIZ code table.

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>vehicleDateLocation</strong></td>
<td valign="top"><a href="#vehicledatelocation">VehicleDateLocation</a></td>
<td>

Agreed pick-up and return location, Date and Time

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>nameOfMainDriver</strong></td>
<td valign="top"><a href="#personname">PersonName</a>!</td>
<td>

Name of the main (primary) driver or passenger

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>vehicleQuantity</strong></td>
<td valign="top"><a href="#int">Int</a></td>
<td>

Number of vehicles

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>baggagerQuantity</strong></td>
<td valign="top"><a href="#int">Int</a></td>
<td>

Number of bags

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>passengerQuantity</strong></td>
<td valign="top"><a href="#int">Int</a></td>
<td>

Number of passengers

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>transmissionType</strong></td>
<td valign="top"><a href="#transmissiontype">TransmissionType</a></td>
<td>

Vehicle transmission type

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>fuelType</strong></td>
<td valign="top"><a href="#vehiclefueltype">VehicleFuelType</a></td>
<td>

The type of fuel used to power the vehicle

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>doorCount</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>vehicleLocation</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>counterLocationCode</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>airConditioningInd</strong></td>
<td valign="top"><a href="#boolean">Boolean</a></td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>vehicleMakeModel</strong></td>
<td valign="top"><a href="#vehiclemakemodel">VehicleMakeModel</a></td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>rateGuaranteedInd</strong></td>
<td valign="top"><a href="#boolean">Boolean</a></td>
<td></td>
</tr>
</tbody>
</table>

### VendorLocation

<table>
<thead>
<tr>
<th align="left">Field</th>
<th align="right">Argument</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>type</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>rentalLocationNumber</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td>

RentalLocationNumber

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>rentalLocationCode</strong></td>
<td valign="top"><a href="#int">Int</a></td>
<td>

Locations based on the OTA VWF list

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>locationCode</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td>

IATA Airport Code

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>addressSummary</strong></td>
<td valign="top"><a href="#address">Address</a></td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>operationTimes</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>telephoneSummary</strong></td>
<td valign="top"><a href="#telephone">Telephone</a></td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>operationScheduleInfo</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td>

A long string - maximum length of 4096

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>provider</strong></td>
<td valign="top"><a href="#companyname">CompanyName</a></td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>vendor</strong></td>
<td valign="top"><a href="#companyname">CompanyName</a></td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>operationSchedule</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td></td>
</tr>
</tbody>
</table>

## Inputs

### AddressInput

Address information input object

<table>
<thead>
<tr>
<th colspan="2" align="left">Field</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>bldgRoom</strong></td>
<td valign="top"><a href="#bldgroom">bldgRoom</a></td>
<td>

Building and room number
Min String Length : 0 , Max String Length : 128

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>streetNumber</strong></td>
<td valign="top"><a href="#streetnumber">streetNumber</a></td>
<td>

The street number alone is the numerical number that precedes the street name in the address
Min String Length : 0 , Max String Length : 128

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>street</strong></td>
<td valign="top"><a href="#street">street</a></td>
<td>

May contain the street number when the Street number element is missing.
Min String Length : 0 , Max String Length : 128

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>addressLine</strong></td>
<td valign="top">[<a href="#string">String</a>!]</td>
<td>

Additional address lines

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>cityCode</strong></td>
<td valign="top"><a href="#citycode">cityCode</a></td>
<td>

City code - psuedo city code
Min String Length : 2 , Max String Length : 10

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>city</strong></td>
<td valign="top"><a href="#city">city</a>!</td>
<td>

City (e.g., Dublin), town, or postal station (i.e., a postal service territory, often used in a military address).
Min String Length : 1 , Max String Length : 128

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>county</strong></td>
<td valign="top"><a href="#county">county</a></td>
<td>

County or Region Name (e.g., Fairfax).
Min String Length : 0 , Max String Length : 128

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>stateProv</strong></td>
<td valign="top"><a href="#stateprov">stateProv</a></td>
<td>

The standard code or abbreviation for the state, province, or region with optional name
Min String Length : 2 , Max String Length : 512

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>countryCode</strong></td>
<td valign="top"><a href="#countrycode">countryCode</a></td>
<td>

ISO 3166 code for a Country with optional name
Min String Length : 2 , Max String Length : 2

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>countryName</strong></td>
<td valign="top"><a href="#countryname">countryName</a></td>
<td>

Country name
Min String Length : 0 , Max String Length : 128

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>postalCode</strong></td>
<td valign="top"><a href="#postalcode">postalCode</a></td>
<td>

Post Office Code number
Min String Length : 0 , Max String Length : 128

</td>
</tr>
</tbody>
</table>

### AgencyInput

A travel agency input object

<table>
<thead>
<tr>
<th colspan="2" align="left">Field</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>agencyId</strong></td>
<td valign="top"><a href="#agencyid">agencyId</a></td>
<td>

An Agency identifier
Min String Length : 0 , Max String Length : 32

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>pcc</strong></td>
<td valign="top"><a href="#pcc">pcc</a>!</td>
<td>

Identifies the PCC for which the API is being called
Min String Length : 2 , Max String Length : 10

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>name</strong></td>
<td valign="top"><a href="#name">name</a>!</td>
<td>

The Agency name
Min String Length : 1 , Max String Length : 32

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>address</strong></td>
<td valign="top"><a href="#addressinput">AddressInput</a>!</td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>assistancePhone</strong></td>
<td valign="top"><a href="#assistancephone">assistancePhone</a>!</td>
<td>

Agency assitance phone number
Min String Length : 1 , Max String Length : 32

</td>
</tr>
</tbody>
</table>

### AirReservationInput

Air reservation input object

<table>
<thead>
<tr>
<th colspan="2" align="left">Field</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>bookingReference</strong></td>
<td valign="top"><a href="#bookingreference">bookingReference</a>!</td>
<td>

A user enterable code to identify a reservation, such as a PNR number or other short alphanumeric code that is not a guid
Min String Length : 1 , Max String Length : 128

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>bookingSource</strong></td>
<td valign="top"><a href="#reservationsource">ReservationSource</a>!</td>
<td>

Reservation source system identifier

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>reservationDate</strong></td>
<td valign="top"><a href="#datetime">DateTime</a>!</td>
<td>

Date and Time the reservation was created

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>status</strong></td>
<td valign="top"><a href="#reservationstatus">ReservationStatus</a>!</td>
<td>

Status of the reservation

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>flightSegments</strong></td>
<td valign="top">[<a href="#flightsegmentinput">FlightSegmentInput</a>!]!</td>
<td>

List of flight segments in this reservation

</td>
</tr>
</tbody>
</table>

### AnalyticsEventDefinition

<table>
<thead>
<tr>
<th colspan="2" align="left">Field</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>eventCode</strong></td>
<td valign="top"><a href="#messagingeventcode">MessagingEventCode</a>!</td>
<td>

the type of event (e.g. Delivered, Opened etc)

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>campaignId</strong></td>
<td valign="top"><a href="#string">String</a>!</td>
<td>

the unique id of the campaign that produced the message

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>executionId</strong></td>
<td valign="top"><a href="#string">String</a>!</td>
<td>

the unique id of the campaign execution that produced the message

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>messageId</strong></td>
<td valign="top"><a href="#string">String</a>!</td>
<td>

the unique id of message

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>locale</strong></td>
<td valign="top"><a href="#string">String</a>!</td>
<td>

the locale of the message

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>timestamp</strong></td>
<td valign="top"><a href="#datetime">DateTime</a>!</td>
<td>

the timestamp of the event (YYYY-MM-DDThh:mm:ssZ)

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>source</strong></td>
<td valign="top"><a href="#string">String</a>!</td>
<td>

the source that produced the message

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>channel</strong></td>
<td valign="top"><a href="#channeltype">ChannelType</a>!</td>
<td>

the channel targeted byt the message (e.g. FCM, APNS etc)

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>recipientId</strong></td>
<td valign="top"><a href="#string">String</a>!</td>
<td>

the unique id of the recipient for the message

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>triggerType</strong></td>
<td valign="top"><a href="#triggertype">TriggerType</a>!</td>
<td>

the trigger for the message (e.g. GEOFENCE or FALLBACK for geofence triggered messages, EXTERNAL for other push messages)

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>payload</strong></td>
<td valign="top"><a href="#payload">Payload</a></td>
<td>

the payload containing additional information for the event

</td>
</tr>
</tbody>
</table>

### ChannelDefinition

<table>
<thead>
<tr>
<th colspan="2" align="left">Field</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>type</strong></td>
<td valign="top"><a href="#channeltype">ChannelType</a>!</td>
<td>

the type of channel (e.g. APNS, FCM etc)

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>address</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td>

unique address (e.g. APNs device token, FCM registration, email address etc). For Message Centre channel the address may be omitted

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>locale</strong></td>
<td valign="top"><a href="#string">String</a>!</td>
<td>

preferred locale for the channel

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>appVersion</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td>

the version of the application that is registering this channel

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>osVersion</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td>

the version of the OS that is registering this channel

</td>
</tr>
</tbody>
</table>

### ClickedEventInfo

additional information on an item (e.g. a UI button) clicked by the recipient of the message

<table>
<thead>
<tr>
<th colspan="2" align="left">Field</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>clickedItemName</strong></td>
<td valign="top"><a href="#string">String</a>!</td>
<td>

name of the item clicked by the recipient

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>clickedItemId</strong></td>
<td valign="top"><a href="#int">Int</a>!</td>
<td>

id of the item clicked by the recipient

</td>
</tr>
</tbody>
</table>

### FlightInput

Flight details input object

<table>
<thead>
<tr>
<th colspan="2" align="left">Field</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>distance</strong></td>
<td valign="top"><a href="#int">Int</a></td>
<td>

Optional Flight distance in Kilometers

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>stops</strong></td>
<td valign="top"><a href="#int">Int</a></td>
<td>

Number of stops in this segment (if there are any intermediate stops)

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>carrier</strong></td>
<td valign="top"><a href="#carrier">carrier</a>!</td>
<td>

Airline code for the Flight marketing carrier
Min String Length : 2 , Max String Length : 3

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>carrierName</strong></td>
<td valign="top"><a href="#carriername">carrierName</a>!</td>
<td>

Airline name for the Flight marketing carrier
Min String Length : 1 , Max String Length : 128

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>number</strong></td>
<td valign="top"><a href="#number">number</a>!</td>
<td>

The Flight number
Min String Length : 1 , Max String Length : 4

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>operatingCarrier</strong></td>
<td valign="top"><a href="#operatingcarrier">operatingCarrier</a></td>
<td>

Airline code for the Flight operating carrier
Min String Length : 2 , Max String Length : 3

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>operatingCarrierName</strong></td>
<td valign="top"><a href="#operatingcarriername">operatingCarrierName</a></td>
<td>

Airline name for the Flight operating carrier
Min String Length : 0 , Max String Length : 128

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>equipment</strong></td>
<td valign="top"><a href="#equipment">equipment</a></td>
<td>

Identifies the Aircraft (AirEquipCodeIATA)
Min String Length : 3 , Max String Length : 3

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>departureAirport</strong></td>
<td valign="top"><a href="#departureairport">departureAirport</a>!</td>
<td>

Departure airport IATA code
Min String Length : 3 , Max String Length : 3

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>departureAirportLocation</strong></td>
<td valign="top"><a href="#addressinput">AddressInput</a></td>
<td>

Departure airport location information

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>departureDateTime</strong></td>
<td valign="top"><a href="#datetimeoffset">DateTimeOffset</a>!</td>
<td>

Flight departure Date and Time

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>departureTerminal</strong></td>
<td valign="top"><a href="#departureterminal">departureTerminal</a></td>
<td>

Airport departure terminal
Min String Length : 0 , Max String Length : 4096

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>departureGate</strong></td>
<td valign="top"><a href="#departuregate">departureGate</a></td>
<td>

Airport departure gate
Min String Length : 0 , Max String Length : 10

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>arrivalAirport</strong></td>
<td valign="top"><a href="#arrivalairport">arrivalAirport</a>!</td>
<td>

Arrival airport IATA code
Min String Length : 3 , Max String Length : 3

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>arrivalAirportLocation</strong></td>
<td valign="top"><a href="#addressinput">AddressInput</a></td>
<td>

Arrival airport location information

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>arrivalDateTime</strong></td>
<td valign="top"><a href="#datetimeoffset">DateTimeOffset</a>!</td>
<td>

Flight arrival Date and Time

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>intermediateStops</strong></td>
<td valign="top">[<a href="#intermediatestopinput">IntermediateStopInput</a>!]</td>
<td>

List of intermediate stops in this segment

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>status</strong></td>
<td valign="top"><a href="#flightstatus">FlightStatus</a></td>
<td>

Status of the flight

</td>
</tr>
</tbody>
</table>

### FlightSegmentInput

Flight segment input object

<table>
<thead>
<tr>
<th colspan="2" align="left">Field</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>sequence</strong></td>
<td valign="top"><a href="#int">Int</a></td>
<td>

Optional sequence number used for sorting segments

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>segmentGroup</strong></td>
<td valign="top"><a href="#int">Int</a></td>
<td>

Optional number used for grouping connected/married flight segments

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>flight</strong></td>
<td valign="top"><a href="#flightinput">FlightInput</a>!</td>
<td>

Flight details for this segments

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>boundFlightsInd</strong></td>
<td valign="top"><a href="#boolean">Boolean</a></td>
<td>

If present and true, the Segments in this Connection must be sold and cancelled together

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>passengers</strong></td>
<td valign="top">[<a href="#passengerflightinput">PassengerFlightInput</a>!]!</td>
<td>

List of passengers for this Flight segment

</td>
</tr>
</tbody>
</table>

### GetMessagePackParams

<table>
<thead>
<tr>
<th colspan="2" align="left">Field</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>tripId</strong></td>
<td valign="top"><a href="#string">String</a>!</td>
<td>

The unique id of the trip associated with the message pack.

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>segmentId</strong></td>
<td valign="top"><a href="#string">String</a>!</td>
<td>

The unique id of the segment associated with the message pack.

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>legId</strong></td>
<td valign="top"><a href="#string">String</a>!</td>
<td>

The unique id of the leg associated associated with the message pack.

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>campaignId</strong></td>
<td valign="top"><a href="#string">String</a>!</td>
<td>

The unique id of the campaign from which the messsage pack will be created.

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>channel</strong></td>
<td valign="top"><a href="#channeltype">ChannelType</a>!</td>
<td>

The channel asociated with the message pack.

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>address</strong></td>
<td valign="top"><a href="#string">String</a>!</td>
<td>

The unique address of the device (e.g. APNs device token, FCM registration).

</td>
</tr>
</tbody>
</table>

### GetMessagesParams

<table>
<thead>
<tr>
<th colspan="2" align="left">Field</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>since</strong></td>
<td valign="top"><a href="#datetime">DateTime</a></td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>status</strong></td>
<td valign="top"><a href="#messagestatus">MessageStatus</a></td>
<td>

The status of messages that should be returned. If no status is provided messages with status READ and UNREAD will be returned.

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>page</strong></td>
<td valign="top"><a href="#int">Int</a>!</td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>pageSize</strong></td>
<td valign="top"><a href="#int">Int</a>!</td>
<td>

The number of messages to return per page.

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>sort</strong></td>
<td valign="top"><a href="#sortorder">SortOrder</a></td>
<td>

Optional parameter that determines sort order of messages. Default value is 'DESC' and will sort messages from newest to the oldest.
If the sort order has 'ASC' value the messages will be sorted from oldest to newest.

</td>
</tr>
</tbody>
</table>

### HospitalityReservationInput

Hospitality (e.g. Hotel) reservation input object - Extended from flight as per OTM

<table>
<thead>
<tr>
<th colspan="2" align="left">Field</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>bookingReference</strong></td>
<td valign="top"><a href="#bookingreference">bookingReference</a>!</td>
<td>

A user enterable code to identify a reservation, such as a PNR number or other short alphanumeric code that is not a guid
Min String Length : 1 , Max String Length : 128

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>bookingSource</strong></td>
<td valign="top"><a href="#reservationsource">ReservationSource</a>!</td>
<td>

Reservation source system identifier

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>reservationDate</strong></td>
<td valign="top"><a href="#datetime">DateTime</a>!</td>
<td>

Date and Time the reservation was created

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>status</strong></td>
<td valign="top"><a href="#reservationstatus">ReservationStatus</a>!</td>
<td>

Status of the reservation

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>guests</strong></td>
<td valign="top"><a href="#guests">guests</a>!</td>
<td>

Total number of guests
Min Int Value : 1 , Max String Value : 10000

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>propertyChainCode</strong></td>
<td valign="top"><a href="#propertychaincode">propertyChainCode</a></td>
<td>

Hotel chain code
Min String Length : 0 , Max String Length : 2

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>propertyChainName</strong></td>
<td valign="top"><a href="#propertychainname">propertyChainName</a></td>
<td>

Hotel chain name
Min String Length : 0 , Max String Length : 100

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>propertyName</strong></td>
<td valign="top"><a href="#propertyname">propertyName</a>!</td>
<td>

Hotel property name
Min String Length : 1 , Max String Length : 100

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>propertyLocation</strong></td>
<td valign="top"><a href="#addressinput">AddressInput</a>!</td>
<td>

Hotel property location

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>propertyTelephone</strong></td>
<td valign="top"><a href="#propertytelephone">propertyTelephone</a></td>
<td>

Hotel property contact telephone number
Min String Length : 0 , Max String Length : 32

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>roomDescription</strong></td>
<td valign="top"><a href="#roomdescription">roomDescription</a>!</td>
<td>

Hotel room description
Min String Length : 1 , Max String Length : 300

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>smokingAllowed</strong></td>
<td valign="top"><a href="#yesnounknown">YesNoUnknown</a></td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>wifiIncluded</strong></td>
<td valign="top"><a href="#yesnounknown">YesNoUnknown</a></td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>nameOfMainGuest</strong></td>
<td valign="top"><a href="#personnameinput">PersonNameInput</a>!</td>
<td>

Name of main (primary) guest

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>checkIn</strong></td>
<td valign="top"><a href="#datetimeoffset">DateTimeOffset</a>!</td>
<td>

Check-in Date and Time

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>checkOut</strong></td>
<td valign="top"><a href="#datetimeoffset">DateTimeOffset</a>!</td>
<td>

Check-out Date and Time

</td>
</tr>
</tbody>
</table>

### IntermediateStopInput

An intermediate stop location and duration

<table>
<thead>
<tr>
<th colspan="2" align="left">Field</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>value</strong></td>
<td valign="top"><a href="#value">value</a>!</td>
<td>

IATA airport code
Min String Length : 3 , Max String Length : 3

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>duration</strong></td>
<td valign="top"><a href="#string">String</a>!</td>
<td>

Duration stopped at this location

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>equipment</strong></td>
<td valign="top"><a href="#equipment">equipment</a></td>
<td>

Identifies the Aircraft (AirEquipCodeIATA)
Min String Length : 3 , Max String Length : 3

</td>
</tr>
</tbody>
</table>

### MessageDefinition

<table>
<thead>
<tr>
<th colspan="2" align="left">Field</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>channel</strong></td>
<td valign="top"><a href="#channeltype">ChannelType</a>!</td>
<td>

the channel (e.g. APNS, FCM etc)

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>locale</strong></td>
<td valign="top"><a href="#string">String</a>!</td>
<td>

locale for the channel

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>text</strong></td>
<td valign="top"><a href="#string">String</a>!</td>
<td>

text of the message to be sent

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>recipients</strong></td>
<td valign="top">[<a href="#string">String</a>!]!</td>
<td>

user ids of the recipients for the message - maximum of 10 recipients

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>notificationPreference</strong></td>
<td valign="top"><a href="#string">String</a>!</td>
<td>

the notification preference applicable to the message (e.g. 'Promotions', 'Travel Alerts')

</td>
</tr>
</tbody>
</table>

### NotificationPreferenceDefinition

<table>
<thead>
<tr>
<th colspan="2" align="left">Field</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>name</strong></td>
<td valign="top"><a href="#string">String</a>!</td>
<td>

the name for the notification preference (e.g. 'Promotions', 'Travel Alerts')

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>enabled</strong></td>
<td valign="top"><a href="#boolean">Boolean</a>!</td>
<td>

true to enable these types of notifications, false to disable

</td>
</tr>
</tbody>
</table>

### PassengerFlightInput

Passenger on a Flight input object

<table>
<thead>
<tr>
<th colspan="2" align="left">Field</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>passengerName</strong></td>
<td valign="top"><a href="#personnameinput">PersonNameInput</a>!</td>
<td>

Name of passenger on a Flight

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>infant</strong></td>
<td valign="top"><a href="#boolean">Boolean</a>!</td>
<td>

Infant passenger indicator

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>classOfService</strong></td>
<td valign="top"><a href="#classofservice">classOfService</a></td>
<td>

Class of service code, specify which class(s) of service returned in CatalogOfferings
Min String Length : 1 , Max String Length : 2

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>cabin</strong></td>
<td valign="top"><a href="#cabin">Cabin</a></td>
<td>

Cabin type indicator

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>fareBasisCode</strong></td>
<td valign="top"><a href="#farebasiscode">fareBasisCode</a></td>
<td>

Basis of fare code
Min String Length : 0 , Max String Length : 32

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>privateFareInd</strong></td>
<td valign="top"><a href="#boolean">Boolean</a></td>
<td>

If present and true, this is a private fare

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>ticket</strong></td>
<td valign="top"><a href="#ticket">ticket</a></td>
<td>

Passenger ticket number
Min String Length : 0 , Max String Length : 32

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>seat</strong></td>
<td valign="top"><a href="#seat">seat</a></td>
<td>

Passenger seat number
Min String Length : 0 , Max String Length : 32

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>ancillaries</strong></td>
<td valign="top">[<a href="#ancillary">Ancillary</a>!]</td>
<td>

List of ancillaries

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>checkInStatus</strong></td>
<td valign="top"><a href="#checkinstatus">CheckInStatus</a></td>
<td>

Passenger check-in status

</td>
</tr>
</tbody>
</table>

### Payload

<table>
<thead>
<tr>
<th colspan="2" align="left">Field</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>clickedEventInfo</strong></td>
<td valign="top"><a href="#clickedeventinfo">ClickedEventInfo</a></td>
<td>

for clicked events only - additional information about the specific button the user clicked, can be omitted if user did not click a specific button

</td>
</tr>
</tbody>
</table>

### PersonNameInput

A Person's name input object
given : Min String Length : 0 , Max String Length : 30
surname : May be used to pass full name - Min String Length : 1 , Max String Length : 30

<table>
<thead>
<tr>
<th colspan="2" align="left">Field</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>given</strong></td>
<td valign="top"><a href="#given">given</a></td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>surname</strong></td>
<td valign="top"><a href="#surname">surname</a>!</td>
<td></td>
</tr>
</tbody>
</table>

### RailReservationInput

A Rail reservation input object - Extended from Flight as per OTM

<table>
<thead>
<tr>
<th colspan="2" align="left">Field</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>bookingReference</strong></td>
<td valign="top"><a href="#bookingreference">bookingReference</a>!</td>
<td>

A user enterable code to identify a reservation, such as a PNR number or other short alphanumeric code that is not a guid
Min String Length : 1 , Max String Length : 128

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>bookingSource</strong></td>
<td valign="top"><a href="#reservationsource">ReservationSource</a>!</td>
<td>

Reservation source system identifier

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>reservationDate</strong></td>
<td valign="top"><a href="#datetime">DateTime</a>!</td>
<td>

Date and Time the reservation was created

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>status</strong></td>
<td valign="top"><a href="#reservationstatus">ReservationStatus</a>!</td>
<td>

Status of the reservation

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>railOperator</strong></td>
<td valign="top"><a href="#railoperator">railOperator</a>!</td>
<td>

Operator name
Min String Length : 1 , Max String Length : 128

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>departureStation</strong></td>
<td valign="top"><a href="#addressinput">AddressInput</a>!</td>
<td>

Departure station address

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>arrivalStation</strong></td>
<td valign="top"><a href="#addressinput">AddressInput</a>!</td>
<td>

Arrival station address

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>seatQuantity</strong></td>
<td valign="top"><a href="#seatquantity">seatQuantity</a></td>
<td>

Number of reserved seats
Min Int Value : 1 , Max Int Value : 100

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>seatNumber</strong></td>
<td valign="top"><a href="#seatnumber">seatNumber</a></td>
<td>

Assigned seat of main (primary) passenger
Min String Length : 0 , Max String Length : 32

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>firstClass</strong></td>
<td valign="top"><a href="#boolean">Boolean</a></td>
<td>

Seat class indicator

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>nameOfMainPassenger</strong></td>
<td valign="top"><a href="#personnameinput">PersonNameInput</a>!</td>
<td>

Name of the main (primary) passenger

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>departs</strong></td>
<td valign="top"><a href="#datetimeoffset">DateTimeOffset</a>!</td>
<td>

Train departure Date and Time

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>arrives</strong></td>
<td valign="top"><a href="#datetimeoffset">DateTimeOffset</a></td>
<td>

Train arrival Date and Time

</td>
</tr>
</tbody>
</table>

### Recipient

<table>
<thead>
<tr>
<th colspan="2" align="left">Field</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>type</strong></td>
<td valign="top"><a href="#recipienttype">RecipientType</a>!</td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>address</strong></td>
<td valign="top"><a href="#string">String</a>!</td>
<td></td>
</tr>
</tbody>
</table>

### SendItineraryDefinition

<table>
<thead>
<tr>
<th colspan="2" align="left">Field</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>to</strong></td>
<td valign="top">[<a href="#recipient">Recipient</a>!]!</td>
<td>

an array of recipients to receive the itinerary information

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>pnr</strong></td>
<td valign="top"><a href="#string">String</a>!</td>
<td>

passenger name record - used with last name and pcc to find correct trip

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>lastName</strong></td>
<td valign="top"><a href="#string">String</a>!</td>
<td>

lead passenger last name - used with pnr and pcc to find correct trip

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>pcc</strong></td>
<td valign="top"><a href="#string">String</a>!</td>
<td>

booking agency pseudo city code - used with pnr and last name to find correct trip

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>message</strong></td>
<td valign="top"><a href="#string">String</a></td>
<td>

personalised message to be included as part of the itinerary

</td>
</tr>
</tbody>
</table>

### TransferReservationInput

Transfer reservation input object

<table>
<thead>
<tr>
<th colspan="2" align="left">Field</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>bookingReference</strong></td>
<td valign="top"><a href="#bookingreference">bookingReference</a>!</td>
<td>

A user enterable code to identify a reservation, such as a PNR number or other short alphanumeric code that is not a guid
Min String Length : 1 , Max String Length : 128

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>bookingSource</strong></td>
<td valign="top"><a href="#reservationsource">ReservationSource</a>!</td>
<td>

Reservation source system identifier

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>reservationDate</strong></td>
<td valign="top"><a href="#datetime">DateTime</a>!</td>
<td>

Date and Time the reservation was created

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>status</strong></td>
<td valign="top"><a href="#reservationstatus">ReservationStatus</a>!</td>
<td>

Status of the reservation

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>pickupDateTime</strong></td>
<td valign="top"><a href="#datetimeoffset">DateTimeOffset</a>!</td>
<td>

Agreed pick-up Date and Time

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>pickupLocation</strong></td>
<td valign="top"><a href="#addressinput">AddressInput</a>!</td>
<td>

Agreed pick-up location

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>dropOffDateTime</strong></td>
<td valign="top"><a href="#datetimeoffset">DateTimeOffset</a>!</td>
<td>

Agreed drop-off Date and Time

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>dropOffLocation</strong></td>
<td valign="top"><a href="#addressinput">AddressInput</a>!</td>
<td>

Agreed drop-off location

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>provider</strong></td>
<td valign="top"><a href="#provider">provider</a>!</td>
<td>

Transfer provider
Min String Length : 1 , Max String Length : 128

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>vendor</strong></td>
<td valign="top"><a href="#vendor">vendor</a></td>
<td>

Transfer vendor
Min String Length : 0 , Max String Length : 128

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>passengerQuantity</strong></td>
<td valign="top"><a href="#int">Int</a></td>
<td>

Number of passengers

</td>
</tr>
</tbody>
</table>

### TripInput

A Trip input object for use with GraphQL mutations

<table>
<thead>
<tr>
<th colspan="2" align="left">Field</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>bookingReference</strong></td>
<td valign="top"><a href="#bookingreference">bookingReference</a>!</td>
<td>

A user enterable code to identify a Trip, such as a PNR number or other short alpha/numeric code that is not a guid
Min String Length : 1 , Max String Length : 128

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>reservationDate</strong></td>
<td valign="top"><a href="#datetime">DateTime</a>!</td>
<td>

Date and Time the Trip (or first itinerary reservation) was created

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>airReservations</strong></td>
<td valign="top">[<a href="#airreservationinput">AirReservationInput</a>!]</td>
<td>

List of Air (flight) reservations in this Trip

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>hospitalityReservations</strong></td>
<td valign="top">[<a href="#hospitalityreservationinput">HospitalityReservationInput</a>!]</td>
<td>

List of Hospitality (e.g. Hotel) reservations in this Trip

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>railReservations</strong></td>
<td valign="top">[<a href="#railreservationinput">RailReservationInput</a>!]</td>
<td>

List of Rail reservations in this Trip

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>vehicleReservations</strong></td>
<td valign="top">[<a href="#vehiclereservationinput">VehicleReservationInput</a>!]</td>
<td>

List of Car Hire reservations in this Trip

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>transferReservations</strong></td>
<td valign="top">[<a href="#transferreservationinput">TransferReservationInput</a>!]</td>
<td>

List of Transfer reservations in this Trip

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>traveler</strong></td>
<td valign="top"><a href="#traveler">traveler</a>!</td>
<td>

The Traveler (idenitifed by their email address)
Min String Length : 1 , Max String Length : 128

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>corporateId</strong></td>
<td valign="top"><a href="#corporateid">corporateId</a></td>
<td>

Corporate Identifier associated with this Trip and Traveler
Min String Length : 0 , Max String Length : 32

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>bookingAgent</strong></td>
<td valign="top"><a href="#agencyinput">AgencyInput</a>!</td>
<td>

Travel Agent associated with this Trip

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>status</strong></td>
<td valign="top"><a href="#reservationstatus">ReservationStatus</a></td>
<td>

Status of the Trip

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>clientVersion</strong></td>
<td valign="top"><a href="#int">Int</a>!</td>
<td>

Version of the trip

</td>
</tr>
</tbody>
</table>

### VehicleReservationInput

Car rental reservations - Extended from Flight as per OTM

<table>
<thead>
<tr>
<th colspan="2" align="left">Field</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>bookingReference</strong></td>
<td valign="top"><a href="#bookingreference">bookingReference</a>!</td>
<td>

A user enterable code to identify a reservation, such as a PNR number or other short alphanumeric code that is not a guid
Min String Length : 1 , Max String Length : 128

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>bookingSource</strong></td>
<td valign="top"><a href="#reservationsource">ReservationSource</a>!</td>
<td>

Reservation source system identifier

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>reservationDate</strong></td>
<td valign="top"><a href="#datetime">DateTime</a>!</td>
<td>

Date and Time the reservation was created

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>status</strong></td>
<td valign="top"><a href="#reservationstatus">ReservationStatus</a>!</td>
<td>

Status of the reservation

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>vehicleCategoryCode</strong></td>
<td valign="top"><a href="#vehiclecategorycode">vehicleCategoryCode</a></td>
<td>

VEC code values from OTA 2011B descriptive code tables
Min String Length : 0 , Max String Length : 5

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>vehicleClass</strong></td>
<td valign="top"><a href="#vehicleclass">VehicleClass</a></td>
<td>

The class of the car or other vehicle, such as intermediate, compact, full size

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>vehicleSizeCode</strong></td>
<td valign="top"><a href="#vehiclesizecode">vehicleSizeCode</a></td>
<td>

The size of the Vehicle. The OTA SIZ code table.
Min String Length : 0 , Max String Length : 5

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>pickupDateTime</strong></td>
<td valign="top"><a href="#datetimeoffset">DateTimeOffset</a>!</td>
<td>

Agreed pick-up Date and Time

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>pickupLocation</strong></td>
<td valign="top"><a href="#addressinput">AddressInput</a>!</td>
<td>

Agreed pick-up location

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>returnDateTime</strong></td>
<td valign="top"><a href="#datetimeoffset">DateTimeOffset</a>!</td>
<td>

Agreed return Date and Time

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>returnLocation</strong></td>
<td valign="top"><a href="#addressinput">AddressInput</a>!</td>
<td>

Agreed returnlocation

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>nameOfMainDriver</strong></td>
<td valign="top"><a href="#personnameinput">PersonNameInput</a>!</td>
<td>

Name of the main (primary) driver or passenger

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>provider</strong></td>
<td valign="top"><a href="#provider">provider</a>!</td>
<td>

Vehicle provider
Min String Length : 1 , Max String Length : 128

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>vendor</strong></td>
<td valign="top"><a href="#vendor">vendor</a></td>
<td>

Vehicle vendor
Min String Length : 0 , Max String Length : 128

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>vehicleQuantity</strong></td>
<td valign="top"><a href="#int">Int</a></td>
<td>

Number of vehicles

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>baggagerQuantity</strong></td>
<td valign="top"><a href="#int">Int</a></td>
<td>

Number of bags

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>passengerQuantity</strong></td>
<td valign="top"><a href="#int">Int</a></td>
<td>

Number of passengers

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>transmissionType</strong></td>
<td valign="top"><a href="#transmissiontype">TransmissionType</a></td>
<td>

Vehicle transmission type

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>fuelType</strong></td>
<td valign="top"><a href="#vehiclefueltype">VehicleFuelType</a></td>
<td>

The type of fuel used to power the vehicle

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>doorCount</strong></td>
<td valign="top"><a href="#doorcount">doorCount</a></td>
<td>

Vehicle door count
Min String Length : 1 , Max String Length : 8

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>vehicleLocation</strong></td>
<td valign="top"><a href="#vehiclelocation">vehicleLocation</a></td>
<td>

Vehicle location
Min String Length : 0 , Max String Length : 100

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>counterLocationCode</strong></td>
<td valign="top"><a href="#counterlocationcode">counterLocationCode</a></td>
<td>

Counter location code
Min String Length : 0 , Max String Length : 4

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>airConditioningInd</strong></td>
<td valign="top"><a href="#boolean">Boolean</a></td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>vehicleMake</strong></td>
<td valign="top"><a href="#vehiclemake">vehicleMake</a>!</td>
<td>

Vehicle make
Min String Length : 1 , Max String Length : 16

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>vehicleModel</strong></td>
<td valign="top"><a href="#vehiclemodel">vehicleModel</a>!</td>
<td>

Vehicle Model
Min String Length : 1 , Max String Length : 16

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>rateGuaranteedInd</strong></td>
<td valign="top"><a href="#boolean">Boolean</a></td>
<td></td>
</tr>
</tbody>
</table>

## Enums

### AddressRole

<table>
<thead>
<th align="left">Value</th>
<th align="left">Description</th>
</thead>
<tbody>
<tr>
<td valign="top"><strong>HOME</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>BUSINESS</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>MAILING</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>DELIVERY</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>DESTINATION</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>OTHER</strong></td>
<td></td>
</tr>
</tbody>
</table>

### AnalyticsEventsStatus

<table>
<thead>
<th align="left">Value</th>
<th align="left">Description</th>
</thead>
<tbody>
<tr>
<td valign="top"><strong>ACCEPTED</strong></td>
<td></td>
</tr>
</tbody>
</table>

### Ancillary

Possible passenger flight ancillaries

<table>
<thead>
<th align="left">Value</th>
<th align="left">Description</th>
</thead>
<tbody>
<tr>
<td valign="top"><strong>SEAT_PURCHASED</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>LUGGAGE_PURCHASED</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>CAR_INSURANCE_PURCHASED</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>TRAVEL_INSURANCE_PURCHASED</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>SECURITY_FAST_PASS</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>LOUNGE_ACCESS</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>PRIORITY_BOARDING</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>BREAKFAST_INCLUDED</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>FREE_WIFI</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>FREE_PARKING</strong></td>
<td></td>
</tr>
</tbody>
</table>

### Cabin

Possible passenger flight cabin types

<table>
<thead>
<th align="left">Value</th>
<th align="left">Description</th>
</thead>
<tbody>
<tr>
<td valign="top"><strong>PREMIUM_FIRST</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>FIRST</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>BUSINESS</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>PREMIUM_ECONOMY</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>ECONOMY</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>ALL</strong></td>
<td></td>
</tr>
</tbody>
</table>

### ChannelType

<table>
<thead>
<th align="left">Value</th>
<th align="left">Description</th>
</thead>
<tbody>
<tr>
<td valign="top"><strong>FCM</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>APNS</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>MC</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>SMS</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>EMAIL</strong></td>
<td></td>
</tr>
</tbody>
</table>

### CheckInStatus

Passenger check-in status

<table>
<thead>
<th align="left">Value</th>
<th align="left">Description</th>
</thead>
<tbody>
<tr>
<td valign="top"><strong>CHECKED_IN</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>NOT_CHECKED_IN</strong></td>
<td></td>
</tr>
</tbody>
</table>

### DocTypeCode

Document Type OTA Code

<table>
<thead>
<th align="left">Value</th>
<th align="left">Description</th>
</thead>
<tbody>
<tr>
<td valign="top"><strong>VISA</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>PASSPORT</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>MILITARY_IDENTIFICATION</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>DRIVERS_LICENSE</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>NATIONAL_IDENTITY_DOCUMENT</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>VACCINATION_CERTIFICATE</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>ALIEN_REGISTRATION_NUMBER</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>INSURANCE_POLICY_NUMBER</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>TAX_EXEMPTION_NUMBER</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>VEHICLE_REGISTRATION_LICENSE_NUMBER</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>BODER_CROSSING_CARD</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>REFUGEE_TRAVEL_DOCUMENT</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>PILOTS_LICENSE</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>PERMANENT_RESIDENT_CARD</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>REDRESS_NUMBER</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>KNOWN_TRAVELER_NUMBER</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>NON_STANDARD</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>MERCHANT_NUMBER</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>AIR_NEXUS_CARD</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>CREW_MEMBER_CERTIFICATE</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>PASSPORT_CARD</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>NATURALIZATION_CERTIFICATE</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>TICKET_NUMBER</strong></td>
<td></td>
</tr>
</tbody>
</table>

### FlightStatus

Possible Flight status

<table>
<thead>
<th align="left">Value</th>
<th align="left">Description</th>
</thead>
<tbody>
<tr>
<td valign="top"><strong>UNKNOWN</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>CANCELLED</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>ARRIVED</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>ACTIVE</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>REDIRECTED</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>SCHEDULED</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>DIVERTED</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>DELAYED</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>UPDATED</strong></td>
<td></td>
</tr>
</tbody>
</table>

### FlightType

Type of Flight

<table>
<thead>
<th align="left">Value</th>
<th align="left">Description</th>
</thead>
<tbody>
<tr>
<td valign="top"><strong>DOMESTIC</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>INTERNATIONAL</strong></td>
<td></td>
</tr>
</tbody>
</table>

### Gender

<table>
<thead>
<th align="left">Value</th>
<th align="left">Description</th>
</thead>
<tbody>
<tr>
<td valign="top"><strong>MALE</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>FEMALE</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>UNKNOWN</strong></td>
<td></td>
</tr>
</tbody>
</table>

### GeoPoliticalAreaLevel

<table>
<thead>
<th align="left">Value</th>
<th align="left">Description</th>
</thead>
<tbody>
<tr>
<td valign="top"><strong>WORLD</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>GLOBAL_AREA</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>CONTINENT_GROUP</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>CONTINENT</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>COUNTRY</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>STATE_PROVINCE</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>CITY</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>AIRPORT</strong></td>
<td></td>
</tr>
</tbody>
</table>

### GeofenceTransition

<table>
<thead>
<th align="left">Value</th>
<th align="left">Description</th>
</thead>
<tbody>
<tr>
<td valign="top"><strong>ENTER</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>EXIT</strong></td>
<td></td>
</tr>
</tbody>
</table>

### MessageActionType

<table>
<thead>
<th align="left">Value</th>
<th align="left">Description</th>
</thead>
<tbody>
<tr>
<td valign="top"><strong>LANDING_SCREEN</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>DEEP_LINK</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>EXTERNAL_URL</strong></td>
<td></td>
</tr>
</tbody>
</table>

### MessageStatus

<table>
<thead>
<th align="left">Value</th>
<th align="left">Description</th>
</thead>
<tbody>
<tr>
<td valign="top"><strong>READ</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>UNREAD</strong></td>
<td></td>
</tr>
</tbody>
</table>

### MessagingEventCode

<table>
<thead>
<th align="left">Value</th>
<th align="left">Description</th>
</thead>
<tbody>
<tr>
<td valign="top"><strong>DELIVERED</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>OPENED</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>CLICKED</strong></td>
<td></td>
</tr>
</tbody>
</table>

### OptInStatus

OptInStatus

<table>
<thead>
<th align="left">Value</th>
<th align="left">Description</th>
</thead>
<tbody>
<tr>
<td valign="top"><strong>OPTED_IN</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>OPTED_OUT</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>UNKNOWN</strong></td>
<td></td>
</tr>
</tbody>
</table>

### RecipientType

<table>
<thead>
<th align="left">Value</th>
<th align="left">Description</th>
</thead>
<tbody>
<tr>
<td valign="top"><strong>EMAIL</strong></td>
<td></td>
</tr>
</tbody>
</table>

### RegistrationStatus

<table>
<thead>
<th align="left">Value</th>
<th align="left">Description</th>
</thead>
<tbody>
<tr>
<td valign="top"><strong>REGISTERED</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>ALREADY_REGISTERED</strong></td>
<td></td>
</tr>
</tbody>
</table>

### ReservationSource

Reservation source system identifier

<table>
<thead>
<th align="left">Value</th>
<th align="left">Description</th>
</thead>
<tbody>
<tr>
<td valign="top"><strong>TVPT</strong></td>
<td>

Travelport GDS

</td>
</tr>
<tr>
<td valign="top"><strong>EMAIL</strong></td>
<td>

Parsed Email itinerary

</td>
</tr>
<tr>
<td valign="top"><strong>OTHER</strong></td>
<td>

Other reservation system

</td>
</tr>
</tbody>
</table>

### ReservationStatus

<table>
<thead>
<th align="left">Value</th>
<th align="left">Description</th>
</thead>
<tbody>
<tr>
<td valign="top"><strong>ACTIVE</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>CANCELLED</strong></td>
<td></td>
</tr>
</tbody>
</table>

### Role

<table>
<thead>
<th align="left">Value</th>
<th align="left">Description</th>
</thead>
<tbody>
<tr>
<td valign="top"><strong>MESSAGING</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>SYSTEM</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>ANALYTICS</strong></td>
<td></td>
</tr>
</tbody>
</table>

### RoomAmenityQuality

Used to designate the quality level of the Room Amenity

<table>
<thead>
<th align="left">Value</th>
<th align="left">Description</th>
</thead>
<tbody>
<tr>
<td valign="top"><strong>PREMIUM</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>DELUXE</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>STANDARD</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>ECONOMY</strong></td>
<td></td>
</tr>
</tbody>
</table>

### SendItineraryStatus

<table>
<thead>
<th align="left">Value</th>
<th align="left">Description</th>
</thead>
<tbody>
<tr>
<td valign="top"><strong>ACCEPTED</strong></td>
<td></td>
</tr>
</tbody>
</table>

### SendMessageStatus

<table>
<thead>
<th align="left">Value</th>
<th align="left">Description</th>
</thead>
<tbody>
<tr>
<td valign="top"><strong>ACCEPTED</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>REJECTED</strong></td>
<td></td>
</tr>
</tbody>
</table>

### SortOrder

Used to sort a result-set in ascending or descending order.

<table>
<thead>
<th align="left">Value</th>
<th align="left">Description</th>
</thead>
<tbody>
<tr>
<td valign="top"><strong>ASC</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>DESC</strong></td>
<td></td>
</tr>
</tbody>
</table>

### TelephoneRole

<table>
<thead>
<th align="left">Value</th>
<th align="left">Description</th>
</thead>
<tbody>
<tr>
<td valign="top"><strong>MOBILE</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>HOME</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>WORK</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>OFFICE</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>FAX</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>OTHER</strong></td>
<td></td>
</tr>
</tbody>
</table>

### TransmissionType

<table>
<thead>
<th align="left">Value</th>
<th align="left">Description</th>
</thead>
<tbody>
<tr>
<td valign="top"><strong>AUTOMATIC</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>STANDARD</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>MANUAL</strong></td>
<td></td>
</tr>
</tbody>
</table>

### TriggerType

<table>
<thead>
<th align="left">Value</th>
<th align="left">Description</th>
</thead>
<tbody>
<tr>
<td valign="top"><strong>EXTERNAL</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>GEOFENCE</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>FALLBACK</strong></td>
<td>

Triggered as a result of fallback on a message pack geofence.
If geolocation cannot be determined, or no geo-coordinates are in a geofence message pack, the message will be triggered at a fallback default message time if present

</td>
</tr>
</tbody>
</table>

### UnregistrationStatus

<table>
<thead>
<th align="left">Value</th>
<th align="left">Description</th>
</thead>
<tbody>
<tr>
<td valign="top"><strong>UNREGISTERED</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>NOT_FOUND</strong></td>
<td></td>
</tr>
</tbody>
</table>

### VehicleClass

<table>
<thead>
<th align="left">Value</th>
<th align="left">Description</th>
</thead>
<tbody>
<tr>
<td valign="top"><strong>INTERMEDIATE</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>COMPACT</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>LUXURY</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>NOT_APPLICABLE</strong></td>
<td></td>
</tr>
</tbody>
</table>

### VehicleFuelType

<table>
<thead>
<th align="left">Value</th>
<th align="left">Description</th>
</thead>
<tbody>
<tr>
<td valign="top"><strong>GASOLINE</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>DIESEL</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>NATURAL_GAS</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>ELECTRIC</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>E85</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>HYBRID</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>PETROL</strong></td>
<td></td>
</tr>
</tbody>
</table>

### YesNoInherit

Yes / No / Inherit flag

<table>
<thead>
<th align="left">Value</th>
<th align="left">Description</th>
</thead>
<tbody>
<tr>
<td valign="top"><strong>YES</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>NO</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>INHERIT</strong></td>
<td></td>
</tr>
</tbody>
</table>

### YesNoUnknown

Yes / No / Unknown flag

<table>
<thead>
<th align="left">Value</th>
<th align="left">Description</th>
</thead>
<tbody>
<tr>
<td valign="top"><strong>YES</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>NO</strong></td>
<td></td>
</tr>
<tr>
<td valign="top"><strong>UNKNOWN</strong></td>
<td></td>
</tr>
</tbody>
</table>

## Scalars

### Boolean

The `Boolean` scalar type represents `true` or `false`.

### Date

A date string, such as 2007-12-03, compliant with the `full-date` format outlined in section 5.6 of the RFC 3339 profile of the ISO 8601 standard for representation of dates and times using the Gregorian calendar.

### DateTime

A date-time string at UTC, such as 2007-12-03T10:15:30Z, compliant with the `date-time` format outlined in section 5.6 of the RFC 3339 profile of the ISO 8601 standard for representation of dates and times using the Gregorian calendar.

### DateTimeOffset

The DateTimeOffset scalar type represents a date, time and offset from UTC.
DateTimeOffset expects timestamps to be formatted in accordance with the
ISO-8601 standard.

### Float

The `Float` scalar type represents signed double-precision fractional values as specified by [IEEE 754](https://en.wikipedia.org/wiki/IEEE_floating_point).

### ID

The `ID` scalar type represents a unique identifier, often used to refetch an object or as key for a cache. The ID type appears in a JSON response as a String; however, it is not intended to be human-readable. When expected as an input type, any string (such as `"4"`) or integer (such as `4`) input value will be accepted as an ID.

### Int

The `Int` scalar type represents non-fractional signed whole numeric values. Int can represent values between -(2^31) and 2^31 - 1.

### String

The `String` scalar type represents textual data, represented as UTF-8 character sequences. The String type is most often used by GraphQL to represent free-form human-readable text.

### agencyId

### arrivalAirport

### assistancePhone

### birthCountry

### birthDate

### birthPlace

### bldgRoom

### bookingReference

### carrier

### carrierName

### city

### cityCode

### classOfService

### corporateId

### counterLocationCode

### countryCode

### countryName

### county

### departureAirport

### departureGate

### departureTerminal

### docNumber

### doorCount

### equipment

### fareBasisCode

### given

### guests

### issueCountry

### name

### nationality

### number

### operatingCarrier

### operatingCarrierName

### pcc

### postalCode

### propertyChainCode

### propertyChainName

### propertyName

### propertyTelephone

### provider

### railOperator

### residence

### roomDescription

### seat

### seatNumber

### seatQuantity

### stateProv

### stateProvCode

### street

### streetNumber

### surname

### ticket

### traveler

### value

### vehicleCategoryCode

### vehicleLocation

### vehicleMake

### vehicleModel

### vehicleSizeCode

### vendor


## Interfaces


### MessageAction

<table>
<thead>
<tr>
<th align="left">Field</th>
<th align="right">Argument</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>actionType</strong></td>
<td valign="top"><a href="#messageactiontype">MessageActionType</a>!</td>
<td></td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>attributes</strong></td>
<td valign="top">[<a href="#attribute">Attribute</a>]</td>
<td></td>
</tr>
</tbody>
</table>

### Reservation

<table>
<thead>
<tr>
<th align="left">Field</th>
<th align="right">Argument</th>
<th align="left">Type</th>
<th align="left">Description</th>
</tr>
</thead>
<tbody>
<tr>
<td colspan="2" valign="top"><strong>locator</strong></td>
<td valign="top"><a href="#locator">Locator</a>!</td>
<td>

Contains the locator (PNR or external locator) or cancellation number for the reservation

</td>
</tr>
<tr>
<td colspan="2" valign="top"><strong>status</strong></td>
<td valign="top"><a href="#reservationstatus">ReservationStatus</a>!</td>
<td>

Status of this reservation

</td>
</tr>
</tbody>
</table>

<!-- END graphql-markdown -->