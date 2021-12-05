void S12S18_Ag2_vs_p_thetaY_trackTruth_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Dec  5 19:12:01 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(467.1062,-0.04769648,3029.613,0.07311689);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1082[11] = {
   451.995,
   653.3689,
   880.4532,
   1123.026,
   1371.063,
   1620.016,
   1866.622,
   2114.934,
   2362.94,
   2613.154,
   2791.843};
   Double_t Graph0_fy1082[11] = {
   0.4691816,
   0.0437455,
   -0.04469545,
   -0.01023516,
   0.01475382,
   0.02039266,
   -0.008262167,
   0.0257992,
   0.009812681,
   0.03384816,
   0.01828713};
   Double_t Graph0_fex1082[11] = {
   0.1000313,
   0.08429077,
   0.06088477,
   0.05944231,
   0.06349073,
   0.07027398,
   0.08235853,
   0.1031157,
   0.1349937,
   0.1638784,
   0.2409119};
   Double_t Graph0_fey1082[11] = {
   0.1326061,
   0.04455771,
   0.02543406,
   0.02085759,
   0.0191508,
   0.01836034,
   0.01859218,
   0.01990116,
   0.02207626,
   0.02280444,
   0.05399319};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1082,Graph0_fy1082,Graph0_fex1082,Graph0_fey1082);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01082 = new TH1F("Graph_Graph01082","S12S18_",100,217.876,3026.103);
   Graph_Graph01082->SetMinimum(-0.03561514);
   Graph_Graph01082->SetMaximum(0.06103555);
   Graph_Graph01082->SetDirectory(0);
   Graph_Graph01082->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01082->SetLineColor(ci);
   Graph_Graph01082->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01082->GetXaxis()->SetRange(19,91);
   Graph_Graph01082->GetXaxis()->CenterTitle(true);
   Graph_Graph01082->GetXaxis()->SetLabelFont(42);
   Graph_Graph01082->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01082->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01082->GetXaxis()->SetTitleFont(42);
   Graph_Graph01082->GetYaxis()->SetTitle("A_{g#minus2} [mrad] / 250 MeV");
   Graph_Graph01082->GetYaxis()->CenterTitle(true);
   Graph_Graph01082->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01082->GetYaxis()->SetLabelFont(42);
   Graph_Graph01082->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01082->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01082->GetYaxis()->SetTitleFont(42);
   Graph_Graph01082->GetZaxis()->SetLabelFont(42);
   Graph_Graph01082->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01082->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01082);
   
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
