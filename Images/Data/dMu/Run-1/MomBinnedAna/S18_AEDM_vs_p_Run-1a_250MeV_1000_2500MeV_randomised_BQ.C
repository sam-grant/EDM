void S18_AEDM_vs_p_Run-1a_250MeV_1000_2500MeV_randomised_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jul 12 23:21:00 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(785.1394,-0.03412176,2704.191,0.03218132);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1073[11] = {
   456.1488,
   653.8919,
   883.5254,
   1127.341,
   1373.07,
   1619.549,
   1866.692,
   2115.978,
   2359.682,
   2607.194,
   2781.755};
   Double_t Graph0_fy1073[11] = {
   -0.1701574,
   0.005016902,
   0.01024609,
   0.0167315,
   -0.03494823,
   -0.01418126,
   -0.02932524,
   0.02221889,
   -0.03391741,
   -0.0271578,
   0.03915372};
   Double_t Graph0_fex1073[11] = {
   0.1558733,
   0.109756,
   0.07461652,
   0.06791802,
   0.06754704,
   0.07503288,
   0.09224771,
   0.1164614,
   0.1541804,
   0.210593,
   0.3609284};
   Double_t Graph0_fey1073[11] = {
   0.2170268,
   0.0557479,
   0.02896359,
   0.02213606,
   0.01945815,
   0.01875796,
   0.01940598,
   0.0207556,
   0.02286446,
   0.02573651,
   0.09397104};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1073,Graph0_fy1073,Graph0_fex1073,Graph0_fey1073);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01073 = new TH1F("Graph_Graph01073","S18",100,223.3806,3014.729);
   Graph_Graph01073->SetMinimum(-0.02749145);
   Graph_Graph01073->SetMaximum(0.02555101);
   Graph_Graph01073->SetDirectory(0);
   Graph_Graph01073->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01073->SetLineColor(ci);
   Graph_Graph01073->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01073->GetXaxis()->SetRange(28,82);
   Graph_Graph01073->GetXaxis()->CenterTitle(true);
   Graph_Graph01073->GetXaxis()->SetLabelFont(42);
   Graph_Graph01073->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01073->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01073->GetXaxis()->SetTitleFont(42);
   Graph_Graph01073->GetYaxis()->SetTitle("A_{EDM} [mrad] / 250 MeV");
   Graph_Graph01073->GetYaxis()->CenterTitle(true);
   Graph_Graph01073->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01073->GetYaxis()->SetLabelFont(42);
   Graph_Graph01073->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01073->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01073->GetYaxis()->SetTitleFont(42);
   Graph_Graph01073->GetZaxis()->SetLabelFont(42);
   Graph_Graph01073->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01073->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01073);
   
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
