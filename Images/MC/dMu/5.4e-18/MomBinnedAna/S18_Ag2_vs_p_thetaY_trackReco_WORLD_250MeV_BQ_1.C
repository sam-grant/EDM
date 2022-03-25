void S18_Ag2_vs_p_thetaY_trackReco_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 02:59:10 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-163.4976,-0.1788223,3375.031,0.4378098);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1133[11] = {
   452.0477,
   653.2775,
   880.5348,
   1123.042,
   1370.867,
   1619.751,
   1866.475,
   2115.067,
   2363.258,
   2612.125,
   2787.408};
   Double_t Graph0_fy1133[11] = {
   0.2151042,
   0.04147165,
   -0.05309731,
   -0.007773165,
   0.0114107,
   0.008806897,
   0.009048208,
   -0.01314632,
   0.02535583,
   0.04377955,
   0.02119791};
   Double_t Graph0_fex1133[11] = {
   0.09825481,
   0.08285797,
   0.05975239,
   0.05830994,
   0.06253833,
   0.06928603,
   0.08176643,
   0.1027071,
   0.1350528,
   0.1614991,
   0.2033584};
   Double_t Graph0_fey1133[11] = {
   0.1199336,
   0.04015273,
   0.02295296,
   0.01881307,
   0.01732633,
   0.01664405,
   0.01694175,
   0.01822,
   0.02022581,
   0.02076468,
   0.05254597};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1133,Graph0_fy1133,Graph0_fex1133,Graph0_fey1133);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01133 = new TH1F("Graph_Graph01133","S18_",100,218.3832,3021.178);
   Graph_Graph01133->SetMinimum(-0.1171591);
   Graph_Graph01133->SetMaximum(0.3761466);
   Graph_Graph01133->SetDirectory(0);
   Graph_Graph01133->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01133->SetLineColor(ci);
   Graph_Graph01133->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01133->GetXaxis()->SetRange(0,100);
   Graph_Graph01133->GetXaxis()->CenterTitle(true);
   Graph_Graph01133->GetXaxis()->SetLabelFont(42);
   Graph_Graph01133->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01133->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01133->GetXaxis()->SetTitleFont(42);
   Graph_Graph01133->GetYaxis()->SetTitle("A_{g#minus2} [mrad] / 250 MeV");
   Graph_Graph01133->GetYaxis()->CenterTitle(true);
   Graph_Graph01133->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01133->GetYaxis()->SetLabelFont(42);
   Graph_Graph01133->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01133->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01133->GetYaxis()->SetTitleFont(42);
   Graph_Graph01133->GetZaxis()->SetLabelFont(42);
   Graph_Graph01133->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01133->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01133);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4466583,0.9362587,0.5533417,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
