void S12S18_full_A_vs_p_trackReco_AAR_200MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Sep 12 22:36:58 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-196.8,-0.4409569,3411.2,1.229547);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1130[14] = {
   300,
   500,
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300,
   2500,
   2700,
   2900};
   Double_t Graph0_fy1130[14] = {
   0.4907746,
   -0.007712303,
   0.1906514,
   0.09757854,
   0.1259004,
   0.1080081,
   0.1541954,
   0.132717,
   0.1467597,
   0.1050306,
   0.06928828,
   0.07993085,
   0.08523187,
   -0.07899917};
   Double_t Graph0_fex1130[14] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t Graph0_fey1130[14] = {
   0.4603551,
   0.08122337,
   0.03945258,
   0.02756752,
   0.02362124,
   0.02185776,
   0.02089435,
   0.02030621,
   0.02076449,
   0.02173267,
   0.0229883,
   0.0238497,
   0.02449586,
   0.08354037};
   TGraphErrors *gre = new TGraphErrors(14,Graph0_fx1130,Graph0_fy1130,Graph0_fex1130,Graph0_fey1130);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01130 = new TH1F("Graph_Graph01130","S12S18",100,0,3280);
   Graph_Graph01130->SetMinimum(-0.2739065);
   Graph_Graph01130->SetMaximum(1.062497);
   Graph_Graph01130->SetDirectory(0);
   Graph_Graph01130->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01130->SetLineColor(ci);
   Graph_Graph01130->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01130->GetXaxis()->SetRange(6,93);
   Graph_Graph01130->GetXaxis()->CenterTitle(true);
   Graph_Graph01130->GetXaxis()->SetLabelFont(42);
   Graph_Graph01130->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01130->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01130->GetXaxis()->SetTitleFont(42);
   Graph_Graph01130->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01130->GetYaxis()->CenterTitle(true);
   Graph_Graph01130->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01130->GetYaxis()->SetLabelFont(42);
   Graph_Graph01130->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01130->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01130->GetYaxis()->SetTitleFont(42);
   Graph_Graph01130->GetZaxis()->SetLabelFont(42);
   Graph_Graph01130->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01130->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01130);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4253015,0.94,0.5746985,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
