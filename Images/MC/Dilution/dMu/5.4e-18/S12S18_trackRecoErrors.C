void S12S18_trackRecoErrors()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec  7 01:11:50 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-132.0973,-0.006049649,3371.64,0.09491748);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1066[11] = {
   451.859,
   653.3117,
   880.4285,
   1123.038,
   1370.992,
   1619.971,
   1866.545,
   2115.011,
   2362.886,
   2613.266,
   2787.684};
   Double_t _fy1066[11] = {
   0.07808962,
   0.02618025,
   0.01499285,
   0.0123194,
   0.01131333,
   0.01077821,
   0.01090028,
   0.01152905,
   0.01243668,
   0.01232611,
   0.02890409};
   Double_t _fex1066[11] = {
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
   Double_t _fey1066[11] = {
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
   TGraphErrors *gre = new TGraphErrors(11,_fx1066,_fy1066,_fex1066,_fey1066);
   gre->SetName("");
   gre->SetTitle(";Decay vertex momentum [MeV];#deltad_{EDM} / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1066 = new TH1F("Graph_Graph1066","",100,218.2765,3021.267);
   Graph_Graph1066->SetMinimum(0.004047065);
   Graph_Graph1066->SetMaximum(0.08482076);
   Graph_Graph1066->SetDirectory(0);
   Graph_Graph1066->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1066->SetLineColor(ci);
   Graph_Graph1066->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1066->GetXaxis()->CenterTitle(true);
   Graph_Graph1066->GetXaxis()->SetLabelFont(42);
   Graph_Graph1066->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1066->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1066->GetXaxis()->SetTitleFont(42);
   Graph_Graph1066->GetYaxis()->SetTitle("#deltad_{EDM} / 250 MeV");
   Graph_Graph1066->GetYaxis()->CenterTitle(true);
   Graph_Graph1066->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1066->GetYaxis()->SetLabelFont(42);
   Graph_Graph1066->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1066->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph1066->GetYaxis()->SetTitleFont(42);
   Graph_Graph1066->GetZaxis()->SetLabelFont(42);
   Graph_Graph1066->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1066->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1066);
   
   gre->Draw("apl");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
