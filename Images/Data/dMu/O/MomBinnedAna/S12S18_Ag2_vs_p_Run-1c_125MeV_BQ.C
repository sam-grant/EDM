void S12S18_Ag2_vs_p_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov  9 11:23:56 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(522,-4.129609,2727,8.874867);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1035[22] = {
   312,
   437,
   562,
   687,
   812,
   937,
   1062,
   1187,
   1312,
   1437,
   1562,
   1687,
   1812,
   1937,
   2062,
   2187,
   2312,
   2437,
   2562,
   2687,
   2812,
   2937};
   Double_t Graph0_fy1035[22] = {
   5.137286,
   0.005820656,
   0.02940292,
   -0.01445419,
   -0.02887809,
   -0.01782383,
   -0.02784241,
   -0.02142865,
   0.01530861,
   0.0007763859,
   0.02096064,
   0.001694696,
   0.04972687,
   0.008066557,
   -0.01656633,
   0.03032232,
   0.009508586,
   -0.003489043,
   -0.0002143818,
   0.01434309,
   0.02165828,
   -1.412547};
   Double_t Graph0_fex1035[22] = {
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
   0,
   0};
   Double_t Graph0_fey1035[22] = {
   1.570169,
   0.1570871,
   0.07606341,
   0.04608834,
   0.0319955,
   0.0263157,
   0.02313646,
   0.02094642,
   0.01973163,
   0.01870571,
   0.01877303,
   0.01820031,
   0.01887521,
   0.01905169,
   0.01996747,
   0.02030326,
   0.0212542,
   0.02300856,
   0.02430867,
   0.02651655,
   0.06549916,
   0.5496488};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1035,Graph0_fy1035,Graph0_fex1035,Graph0_fey1035);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01035 = new TH1F("Graph_Graph01035","S12S18",100,49.5,3199.5);
   Graph_Graph01035->SetMinimum(-2.829161);
   Graph_Graph01035->SetMaximum(7.57442);
   Graph_Graph01035->SetDirectory(0);
   Graph_Graph01035->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01035->SetLineColor(ci);
   Graph_Graph01035->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01035->GetXaxis()->SetRange(23,78);
   Graph_Graph01035->GetXaxis()->CenterTitle(true);
   Graph_Graph01035->GetXaxis()->SetLabelFont(42);
   Graph_Graph01035->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01035->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01035->GetXaxis()->SetTitleFont(42);
   Graph_Graph01035->GetYaxis()->SetTitle("A_{g#minus2} [mrad] / 125 MeV");
   Graph_Graph01035->GetYaxis()->CenterTitle(true);
   Graph_Graph01035->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01035->GetYaxis()->SetLabelFont(42);
   Graph_Graph01035->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01035->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01035->GetYaxis()->SetTitleFont(42);
   Graph_Graph01035->GetZaxis()->SetLabelFont(42);
   Graph_Graph01035->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01035->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01035);
   
   gre->Draw("alp");
   
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
