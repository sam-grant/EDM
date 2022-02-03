void S12_c_vs_p_A_trackReco_WORLD_250MeV_BQ.1_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Feb  2 11:33:01 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.6966,-0.0005910285,3406.985,0.0002453653);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1097[11] = {
   451.637,
   653.3997,
   880.2817,
   1123.202,
   1371.221,
   1620.119,
   1867.021,
   2114.924,
   2362.277,
   2614.139,
   2787.456};
   Double_t Graph0_fy1097[11] = {
   3.588563e-05,
   -2.821658e-07,
   -1.194181e-07,
   -2.035138e-07,
   -3.04773e-07,
   -3.573719e-07,
   -4.057545e-07,
   -9.748951e-08,
   -1.134224e-06,
   -4.684218e-06,
   -0.0001847783};
   Double_t Graph0_fex1097[11] = {
   0.1894701,
   0.1594013,
   0.115333,
   0.112845,
   0.1201609,
   0.1327309,
   0.1547769,
   0.1936791,
   0.2519213,
   0.3112052,
   0.3843093};
   Double_t Graph0_fey1097[11] = {
   5.499393e-06,
   3.657464e-07,
   1.229622e-07,
   1.115485e-07,
   1.353578e-07,
   1.867975e-07,
   3.089687e-07,
   6.518821e-07,
   1.637751e-06,
   3.705841e-06,
   9.67382e-05};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1097,Graph0_fy1097,Graph0_fex1097,Graph0_fey1097);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01097 = new TH1F("Graph_Graph01097","S12_",100,217.8083,3021.48);
   Graph_Graph01097->SetMinimum(-0.0005073891);
   Graph_Graph01097->SetMaximum(0.0001617259);
   Graph_Graph01097->SetDirectory(0);
   Graph_Graph01097->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01097->SetLineColor(ci);
   Graph_Graph01097->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01097->GetXaxis()->SetRange(0,101);
   Graph_Graph01097->GetXaxis()->CenterTitle(true);
   Graph_Graph01097->GetXaxis()->SetLabelFont(42);
   Graph_Graph01097->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01097->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01097->GetXaxis()->SetTitleFont(42);
   Graph_Graph01097->GetYaxis()->SetTitle("c / 250 MeV");
   Graph_Graph01097->GetYaxis()->CenterTitle(true);
   Graph_Graph01097->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01097->GetYaxis()->SetLabelFont(42);
   Graph_Graph01097->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01097->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01097->GetYaxis()->SetTitleFont(42);
   Graph_Graph01097->GetZaxis()->SetLabelFont(42);
   Graph_Graph01097->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01097->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01097);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4466583,0.9362587,0.5533417,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
