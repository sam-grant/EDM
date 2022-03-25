void S0_Y_RMS_vs_p_trackReco_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 02:59:04 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-164.6244,12.44657,3377.861,13.18708);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1064[11] = {
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
   Double_t Graph0_fy1064[11] = {
   13.02486,
   12.97641,
   12.90979,
   12.86731,
   12.80275,
   12.78378,
   12.75042,
   12.6678,
   12.65437,
   12.66167,
   12.64278};
   Double_t Graph0_fex1064[11] = {
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
   Double_t Graph0_fey1064[11] = {
   0.03879507,
   0.01561187,
   0.01089324,
   0.01056793,
   0.0111889,
   0.01233177,
   0.01413748,
   0.01702055,
   0.02141317,
   0.02721675,
   0.07278958};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1064,Graph0_fy1064,Graph0_fex1064,Graph0_fey1064);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01064 = new TH1F("Graph_Graph01064","S0_",100,217.6834,3023.612);
   Graph_Graph01064->SetMinimum(12.52062);
   Graph_Graph01064->SetMaximum(13.11303);
   Graph_Graph01064->SetDirectory(0);
   Graph_Graph01064->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01064->SetLineColor(ci);
   Graph_Graph01064->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01064->GetXaxis()->SetRange(0,100);
   Graph_Graph01064->GetXaxis()->CenterTitle(true);
   Graph_Graph01064->GetXaxis()->SetLabelFont(42);
   Graph_Graph01064->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01064->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01064->GetXaxis()->SetTitleFont(42);
   Graph_Graph01064->GetYaxis()->SetTitle("#sigma_{y} [mm] / 250 MeV");
   Graph_Graph01064->GetYaxis()->CenterTitle(true);
   Graph_Graph01064->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01064->GetYaxis()->SetLabelFont(42);
   Graph_Graph01064->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01064->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01064->GetYaxis()->SetTitleFont(42);
   Graph_Graph01064->GetZaxis()->SetLabelFont(42);
   Graph_Graph01064->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01064->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01064);
   
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
