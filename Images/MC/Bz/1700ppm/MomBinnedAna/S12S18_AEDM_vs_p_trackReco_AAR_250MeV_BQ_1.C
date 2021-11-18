void S12S18_AEDM_vs_p_trackReco_AAR_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:33:54 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(498.5325,-0.3217036,2741.694,0.3625679);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1056[11] = {
   451.9711,
   653.0379,
   880.3489,
   1123.124,
   1371.04,
   1620.362,
   1866.905,
   2115.04,
   2362.543,
   2613.853,
   2788.072};
   Double_t Graph0_fy1056[11] = {
   0.02043215,
   0.03303718,
   -0.01958243,
   0.04996643,
   0.03004439,
   -0.07216567,
   0.01936392,
   -0.05932621,
   0.02445556,
   -0.08355208,
   0.01057832};
   Double_t Graph0_fex1056[11] = {
   0.1712023,
   0.1448381,
   0.1045416,
   0.1021807,
   0.1094244,
   0.1207379,
   0.1418879,
   0.1772384,
   0.2317095,
   0.2829099,
   0.3553794};
   Double_t Graph0_fey1056[11] = {
   0.2280905,
   0.07622474,
   0.04377028,
   0.03607365,
   0.03309861,
   0.03165202,
   0.0317506,
   0.03358947,
   0.03627098,
   0.03559942,
   0.08415846};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1056,Graph0_fy1056,Graph0_fex1056,Graph0_fey1056);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01056 = new TH1F("Graph_Graph01056","S12S18_",100,218.1372,3022.09);
   Graph_Graph01056->SetMinimum(-0.2532764);
   Graph_Graph01056->SetMaximum(0.2941407);
   Graph_Graph01056->SetDirectory(0);
   Graph_Graph01056->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01056->SetLineColor(ci);
   Graph_Graph01056->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01056->GetXaxis()->SetRange(19,82);
   Graph_Graph01056->GetXaxis()->CenterTitle(true);
   Graph_Graph01056->GetXaxis()->SetLabelFont(42);
   Graph_Graph01056->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01056->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01056->GetXaxis()->SetTitleFont(42);
   Graph_Graph01056->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01056->GetYaxis()->CenterTitle(true);
   Graph_Graph01056->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01056->GetYaxis()->SetLabelFont(42);
   Graph_Graph01056->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01056->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01056->GetYaxis()->SetTitleFont(42);
   Graph_Graph01056->GetZaxis()->SetLabelFont(42);
   Graph_Graph01056->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01056->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01056);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4146231,0.9362587,0.5853769,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
