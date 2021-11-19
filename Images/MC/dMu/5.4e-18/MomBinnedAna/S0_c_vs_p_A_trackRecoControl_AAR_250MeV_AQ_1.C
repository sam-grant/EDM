void S0_c_vs_p_A_trackRecoControl_AAR_250MeV_AQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Nov 19 17:30:44 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(8.618866,-0.01037321,3236.488,0.003297698);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1038[11] = {
   453.3151,
   656.6728,
   884.0304,
   1123.299,
   1363.41,
   1601.772,
   1825.357,
   2101.201,
   2414.13,
   2640.4,
   2791.653};
   Double_t Graph0_fy1038[11] = {
   0.0008831451,
   1.333035e-05,
   -2.712234e-06,
   -2.348097e-06,
   -3.626447e-06,
   -6.377143e-06,
   -3.097848e-05,
   -0.006239668,
   4.508858e-05,
   -5.410695e-05,
   0.000655887};
   Double_t Graph0_fex1038[11] = {
   0.2793787,
   0.2094921,
   0.1416291,
   0.130435,
   0.1508062,
   0.2151004,
   0.4392332,
   2.531908,
   0.9989019,
   0.5207588,
   0.4189411};
   Double_t Graph0_fey1038[11] = {
   5.490698e-05,
   2.65562e-06,
   6.933314e-07,
   5.259852e-07,
   8.308468e-07,
   2.699438e-06,
   3.465587e-05,
   0.00185506,
   0.0003717402,
   5.717574e-05,
   0.0003633254};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1038,Graph0_fy1038,Graph0_fex1038,Graph0_fey1038);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01038 = new TH1F("Graph_Graph01038","S0_",100,219.1321,3025.975);
   Graph_Graph01038->SetMinimum(-0.009006122);
   Graph_Graph01038->SetMaximum(0.001930606);
   Graph_Graph01038->SetDirectory(0);
   Graph_Graph01038->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01038->SetLineColor(ci);
   Graph_Graph01038->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01038->GetXaxis()->SetRange(5,96);
   Graph_Graph01038->GetXaxis()->CenterTitle(true);
   Graph_Graph01038->GetXaxis()->SetLabelFont(42);
   Graph_Graph01038->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01038->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01038->GetXaxis()->SetTitleFont(42);
   Graph_Graph01038->GetYaxis()->SetTitle("c");
   Graph_Graph01038->GetYaxis()->CenterTitle(true);
   Graph_Graph01038->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01038->GetYaxis()->SetLabelFont(42);
   Graph_Graph01038->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01038->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01038->GetYaxis()->SetTitleFont(42);
   Graph_Graph01038->GetZaxis()->SetLabelFont(42);
   Graph_Graph01038->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01038->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01038);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4567085,0.9362587,0.5432915,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
