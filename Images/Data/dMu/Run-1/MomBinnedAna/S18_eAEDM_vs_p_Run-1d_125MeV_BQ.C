void S18_eAEDM_vs_p_Run-1d_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 10:51:31 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.8372,-0.0422571,3028.15,0.4891872);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1124[22] = {
   367.2774,
   457.4357,
   569.9772,
   694.5085,
   815.7124,
   938.4776,
   1062.814,
   1188.156,
   1312.577,
   1435.627,
   1561.978,
   1684.874,
   1810.461,
   1934.889,
   2060.232,
   2184.761,
   2309.022,
   2433.188,
   2559.837,
   2677.831,
   2781.311,
   2884.856};
   Double_t Graph0_fy1124[22] = {
   1.197221,
   0.1122824,
   0.05423146,
   0.03345082,
   0.02339652,
   0.01932892,
   0.01701874,
   0.01540882,
   0.0146174,
   0.01391184,
   0.01394773,
   0.01359518,
   0.01423993,
   0.01443411,
   0.01519629,
   0.01547011,
   0.01628241,
   0.01762504,
   0.0184556,
   0.02003443,
   0.05195484,
   0.6013844};
   Double_t Graph0_fex1124[22] = {
   0.1542477,
   0.0772969,
   0.05113436,
   0.03585499,
   0.02910229,
   0.02638949,
   0.02501847,
   0.02428253,
   0.02485795,
   0.02507009,
   0.0270624,
   0.02872554,
   0.03273885,
   0.03590826,
   0.04133977,
   0.04585916,
   0.05343033,
   0.064887,
   0.07654414,
   0.08820872,
   0.1883314,
   0.9865718};
   Double_t Graph0_fey1124[22] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1124,Graph0_fy1124,Graph0_fex1124,Graph0_fey1124);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01124 = new TH1F("Graph_Graph01124","S18",100,115.2511,3137.715);
   Graph_Graph01124->SetMinimum(0.01088733);
   Graph_Graph01124->SetMaximum(0.4360428);
   Graph_Graph01124->SetDirectory(0);
   Graph_Graph01124->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01124->SetLineColor(ci);
   Graph_Graph01124->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01124->GetXaxis()->SetRange(22,88);
   Graph_Graph01124->GetXaxis()->CenterTitle(true);
   Graph_Graph01124->GetXaxis()->SetLabelFont(42);
   Graph_Graph01124->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01124->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01124->GetXaxis()->SetTitleFont(42);
   Graph_Graph01124->GetYaxis()->SetTitle("#deltaA_{EDM} / 125 MeV");
   Graph_Graph01124->GetYaxis()->CenterTitle(true);
   Graph_Graph01124->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01124->GetYaxis()->SetLabelFont(42);
   Graph_Graph01124->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01124->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01124->GetYaxis()->SetTitleFont(42);
   Graph_Graph01124->GetZaxis()->SetLabelFont(42);
   Graph_Graph01124->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01124->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01124);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
