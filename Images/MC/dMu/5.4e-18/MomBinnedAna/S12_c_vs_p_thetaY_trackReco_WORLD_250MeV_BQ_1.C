void S12_c_vs_p_thetaY_trackReco_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 02:59:07 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-163.9079,-1.92523,3375.532,6.082092);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1094[11] = {
   451.7953,
   653.3733,
   880.2915,
   1123.18,
   1371.135,
   1620.251,
   1866.95,
   2115.048,
   2362.624,
   2614.339,
   2787.765};
   Double_t Graph0_fy1094[11] = {
   4.663047,
   -0.319396,
   -0.5743852,
   -0.4144148,
   -0.3412412,
   -0.3277837,
   -0.1932509,
   -0.1544131,
   -0.1679171,
   -0.1065566,
   -0.1175854};
   Double_t Graph0_fex1094[11] = {
   0.09758406,
   0.08244237,
   0.0597378,
   0.05837816,
   0.06217097,
   0.06865415,
   0.08013113,
   0.1003896,
   0.1310277,
   0.1612163,
   0.1970798};
   Double_t Graph0_fey1094[11] = {
   0.08449149,
   0.0283889,
   0.01629071,
   0.01338236,
   0.01222782,
   0.01165547,
   0.01178505,
   0.01263993,
   0.01397639,
   0.01454269,
   0.03505633};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1094,Graph0_fy1094,Graph0_fex1094,Graph0_fey1094);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01094 = new TH1F("Graph_Graph01094","S12_",100,218.0713,3021.588);
   Graph_Graph01094->SetMinimum(-1.124497);
   Graph_Graph01094->SetMaximum(5.28136);
   Graph_Graph01094->SetDirectory(0);
   Graph_Graph01094->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01094->SetLineColor(ci);
   Graph_Graph01094->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01094->GetXaxis()->SetRange(0,100);
   Graph_Graph01094->GetXaxis()->CenterTitle(true);
   Graph_Graph01094->GetXaxis()->SetLabelFont(42);
   Graph_Graph01094->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01094->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01094->GetXaxis()->SetTitleFont(42);
   Graph_Graph01094->GetYaxis()->SetTitle("c [mrad] / 250 MeV");
   Graph_Graph01094->GetYaxis()->CenterTitle(true);
   Graph_Graph01094->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01094->GetYaxis()->SetLabelFont(42);
   Graph_Graph01094->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01094->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01094->GetYaxis()->SetTitleFont(42);
   Graph_Graph01094->GetZaxis()->SetLabelFont(42);
   Graph_Graph01094->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01094->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01094);
   
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
