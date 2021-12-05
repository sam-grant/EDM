void S18_AEDM_vs_p_thetaY_trackTruth_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Dec  5 19:12:00 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(467.3247,-0.06215841,3029.676,0.2649651);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1066[11] = {
   452.2563,
   653.3485,
   880.6539,
   1123,
   1370.953,
   1619.754,
   1866.477,
   2115.036,
   2363.276,
   2612.101,
   2791.808};
   Double_t Graph0_fy1066[11] = {
   -0.4036611,
   0.1972934,
   0.06916323,
   0.1164856,
   0.1011957,
   0.1419405,
   0.1383738,
   0.06331225,
   0.06810588,
   0.1501986,
   0.002736706};
   Double_t Graph0_fex1066[11] = {
   0.1418602,
   0.1195276,
   0.08610237,
   0.08403905,
   0.09007355,
   0.0998744,
   0.1176515,
   0.1477227,
   0.1936415,
   0.231721,
   0.3524151};
   Double_t Graph0_fey1066[11] = {
   0.1881825,
   0.06281106,
   0.03586091,
   0.02938485,
   0.02710309,
   0.02591617,
   0.02633736,
   0.0278697,
   0.03019717,
   0.02973652,
   0.06767085};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1066,Graph0_fy1066,Graph0_fex1066,Graph0_fey1066);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01066 = new TH1F("Graph_Graph01066","S18_",100,218.1098,3026.166);
   Graph_Graph01066->SetMinimum(-0.02944605);
   Graph_Graph01066->SetMaximum(0.2322528);
   Graph_Graph01066->SetDirectory(0);
   Graph_Graph01066->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01066->SetLineColor(ci);
   Graph_Graph01066->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01066->GetXaxis()->SetRange(19,91);
   Graph_Graph01066->GetXaxis()->CenterTitle(true);
   Graph_Graph01066->GetXaxis()->SetLabelFont(42);
   Graph_Graph01066->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01066->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01066->GetXaxis()->SetTitleFont(42);
   Graph_Graph01066->GetYaxis()->SetTitle("A_{EDM} [mrad] / 250 MeV");
   Graph_Graph01066->GetYaxis()->CenterTitle(true);
   Graph_Graph01066->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01066->GetYaxis()->SetLabelFont(42);
   Graph_Graph01066->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01066->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01066->GetYaxis()->SetTitleFont(42);
   Graph_Graph01066->GetZaxis()->SetLabelFont(42);
   Graph_Graph01066->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01066->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01066);
   
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
