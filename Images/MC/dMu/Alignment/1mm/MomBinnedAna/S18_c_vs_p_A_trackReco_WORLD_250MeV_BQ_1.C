void S18_c_vs_p_A_trackReco_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jan 31 18:51:52 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.7144,-8.953396e-05,3408.481,0.0008043739);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1134[11] = {
   451.8866,
   653.0027,
   880.3991,
   1123.088,
   1370.685,
   1619.419,
   1866.328,
   2114.37,
   2363.365,
   2613.147,
   2788.635};
   Double_t Graph0_fy1134[11] = {
   5.453937e-05,
   1.055898e-06,
   4.330172e-07,
   -9.840882e-08,
   -1.791815e-07,
   1.488514e-07,
   6.35689e-07,
   1.858941e-06,
   8.852762e-07,
   1.07667e-05,
   0.0001799507};
   Double_t Graph0_fex1134[11] = {
   0.1946554,
   0.1660176,
   0.1206834,
   0.1185338,
   0.1274588,
   0.1424419,
   0.1680339,
   0.2132611,
   0.2821374,
   0.3382844,
   0.4388311};
   Double_t Graph0_fey1134[11] = {
   5.984377e-06,
   4.077017e-07,
   1.403218e-07,
   1.292297e-07,
   1.612469e-07,
   2.301534e-07,
   3.969405e-07,
   8.71039e-07,
   2.201987e-06,
   4.924645e-06,
   0.0001441877};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1134,Graph0_fy1134,Graph0_fex1134,Graph0_fey1134);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01134 = new TH1F("Graph_Graph01134","S18_",100,217.9537,3022.812);
   Graph_Graph01134->SetMinimum(-1.431665e-07);
   Graph_Graph01134->SetMaximum(0.0007149831);
   Graph_Graph01134->SetDirectory(0);
   Graph_Graph01134->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01134->SetLineColor(ci);
   Graph_Graph01134->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01134->GetXaxis()->SetRange(0,101);
   Graph_Graph01134->GetXaxis()->CenterTitle(true);
   Graph_Graph01134->GetXaxis()->SetLabelFont(42);
   Graph_Graph01134->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01134->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01134->GetXaxis()->SetTitleFont(42);
   Graph_Graph01134->GetYaxis()->SetTitle("c / 250 MeV");
   Graph_Graph01134->GetYaxis()->CenterTitle(true);
   Graph_Graph01134->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01134->GetYaxis()->SetLabelFont(42);
   Graph_Graph01134->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01134->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01134->GetYaxis()->SetTitleFont(42);
   Graph_Graph01134->GetZaxis()->SetLabelFont(42);
   Graph_Graph01134->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01134->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01134);
   
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
