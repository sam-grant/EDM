void S0_Ag2_vs_p_thetaY_trackReco_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 02:59:04 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-164.6244,-0.362603,3377.861,0.2573947);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1059[11] = {
   451.6492,
   653.2572,
   879.9206,
   1123.044,
   1371.41,
   1620.722,
   1868.001,
   2116.576,
   2363.177,
   2615.301,
   2789.538};
   Double_t Graph0_fy1059[11] = {
   -0.01821877,
   -0.2017695,
   0.0008551001,
   -0.0692925,
   0.006365846,
   -0.01900786,
   0.03073479,
   -0.01202661,
   0.03154579,
   -0.01685168,
   -0.005624228};
   Double_t Graph0_fex1059[11] = {
   0.1383671,
   0.1171129,
   0.08543187,
   0.08352476,
   0.08892344,
   0.09816877,
   0.1126998,
   0.1364134,
   0.1707334,
   0.2138205,
   0.2464947};
   Double_t Graph0_fey1059[11] = {
   0.1722805,
   0.05750056,
   0.03310783,
   0.02721303,
   0.02485398,
   0.02366148,
   0.02340876,
   0.02428651,
   0.02587637,
   0.02705199,
   0.06090662};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1059,Graph0_fy1059,Graph0_fex1059,Graph0_fey1059);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01059 = new TH1F("Graph_Graph01059","S0_",100,217.6834,3023.612);
   Graph_Graph01059->SetMinimum(-0.3006032);
   Graph_Graph01059->SetMaximum(0.1953949);
   Graph_Graph01059->SetDirectory(0);
   Graph_Graph01059->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01059->SetLineColor(ci);
   Graph_Graph01059->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01059->GetXaxis()->SetRange(0,100);
   Graph_Graph01059->GetXaxis()->CenterTitle(true);
   Graph_Graph01059->GetXaxis()->SetLabelFont(42);
   Graph_Graph01059->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01059->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01059->GetXaxis()->SetTitleFont(42);
   Graph_Graph01059->GetYaxis()->SetTitle("A_{g#minus2} [mrad] / 250 MeV");
   Graph_Graph01059->GetYaxis()->CenterTitle(true);
   Graph_Graph01059->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01059->GetYaxis()->SetLabelFont(42);
   Graph_Graph01059->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01059->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01059->GetYaxis()->SetTitleFont(42);
   Graph_Graph01059->GetZaxis()->SetLabelFont(42);
   Graph_Graph01059->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01059->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01059);
   
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
