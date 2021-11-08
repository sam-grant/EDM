void S0S12S18_Momentum_Y_RMS_vs_p_trackReco_AAR_125MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 08:59:34 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(522,7.436657,2727,24.47756);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1056[22] = {
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
   Double_t Graph0_fy1056[22] = {
   10.55145,
   14.12358,
   15.86736,
   17.03924,
   18.10103,
   19.04619,
   19.83862,
   20.52065,
   21.03788,
   21.40039,
   21.601,
   21.60646,
   21.49975,
   21.18405,
   20.70515,
   20.0429,
   19.29796,
   18.17686,
   16.94235,
   15.34142,
   13.72426,
   12.14087};
   Double_t Graph0_fex1056[22] = {
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
   Double_t Graph0_fey1056[22] = {
   0.2746433,
   0.04376215,
   0.03471463,
   0.02570989,
   0.0228862,
   0.02258621,
   0.02324806,
   0.02456871,
   0.02594522,
   0.02761205,
   0.02928443,
   0.03094631,
   0.03333524,
   0.03612133,
   0.03941243,
   0.04266263,
   0.04662213,
   0.05104691,
   0.05230118,
   0.05353086,
   0.09160506,
   0.818537};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1056,Graph0_fy1056,Graph0_fex1056,Graph0_fey1056);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01056 = new TH1F("Graph_Graph01056","S0S12S18_",100,49.5,3199.5);
   Graph_Graph01056->SetMinimum(9.140748);
   Graph_Graph01056->SetMaximum(22.77347);
   Graph_Graph01056->SetDirectory(0);
   Graph_Graph01056->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01056->SetLineColor(ci);
   Graph_Graph01056->GetXaxis()->SetTitle("p [MeV]: in range p #minus 62 < p < p #plus 62 MeV");
   Graph_Graph01056->GetXaxis()->SetRange(23,78);
   Graph_Graph01056->GetXaxis()->CenterTitle(true);
   Graph_Graph01056->GetXaxis()->SetLabelFont(42);
   Graph_Graph01056->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01056->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01056->GetXaxis()->SetTitleFont(42);
   Graph_Graph01056->GetYaxis()->SetTitle("#sigma_{p_{y}} [MeV]");
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
   
   TPaveText *pt = new TPaveText(0.3920101,0.9362587,0.6079899,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
