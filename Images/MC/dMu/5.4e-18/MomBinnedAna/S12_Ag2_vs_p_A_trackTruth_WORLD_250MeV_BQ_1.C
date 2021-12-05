void S12_Ag2_vs_p_A_trackTruth_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Dec  5 19:11:59 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(466.8109,-2.481799e-05,3029.776,3.416996e-06);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1055[11] = {
   451.738,
   653.3893,
   880.2527,
   1123.051,
   1371.173,
   1620.272,
   1866.762,
   2114.836,
   2362.621,
   2614.182,
   2791.874};
   Double_t Graph0_fy1055[11] = {
   3.178972e-06,
   4.48692e-07,
   -2.944535e-08,
   -6.356628e-08,
   2.486107e-08,
   -6.840438e-08,
   -2.474377e-07,
   2.860729e-07,
   1.803662e-07,
   -1.556036e-06,
   -2.196548e-05};
   Double_t Graph0_fex1055[11] = {
   0.1410646,
   0.1188845,
   0.08610507,
   0.08408914,
   0.08950778,
   0.0988963,
   0.1153279,
   0.1440033,
   0.1882858,
   0.2317094,
   0.3300425};
   Double_t Graph0_fey1055[11] = {
   3.196108e-06,
   2.154388e-07,
   7.212533e-08,
   6.559829e-08,
   7.900965e-08,
   1.089577e-07,
   1.788757e-07,
   3.677771e-07,
   8.957546e-07,
   1.991425e-06,
   4.622156e-05};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1055,Graph0_fy1055,Graph0_fex1055,Graph0_fey1055);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01055 = new TH1F("Graph_Graph01055","S12_",100,217.5362,3026.265);
   Graph_Graph01055->SetMinimum(-2.199449e-05);
   Graph_Graph01055->SetMaximum(5.934976e-07);
   Graph_Graph01055->SetDirectory(0);
   Graph_Graph01055->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01055->SetLineColor(ci);
   Graph_Graph01055->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01055->GetXaxis()->SetRange(19,91);
   Graph_Graph01055->GetXaxis()->CenterTitle(true);
   Graph_Graph01055->GetXaxis()->SetLabelFont(42);
   Graph_Graph01055->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01055->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01055->GetXaxis()->SetTitleFont(42);
   Graph_Graph01055->GetYaxis()->SetTitle("A_{g#minus2} / 250 MeV");
   Graph_Graph01055->GetYaxis()->CenterTitle(true);
   Graph_Graph01055->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01055->GetYaxis()->SetLabelFont(42);
   Graph_Graph01055->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01055->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01055->GetYaxis()->SetTitleFont(42);
   Graph_Graph01055->GetZaxis()->SetLabelFont(42);
   Graph_Graph01055->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01055->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01055);
   
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
