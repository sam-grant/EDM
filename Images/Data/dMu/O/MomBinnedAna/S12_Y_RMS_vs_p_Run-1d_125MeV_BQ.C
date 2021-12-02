void S12_Y_RMS_vs_p_Run-1d_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov 30 18:01:45 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.8816,9.535011,2727.048,25.90421);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1017[22] = {
   367.2763,
   456.6701,
   570.2384,
   695.014,
   815.941,
   938.5472,
   1062.657,
   1188.254,
   1312.768,
   1435.889,
   1561.964,
   1685.27,
   1810.577,
   1935.117,
   2060.28,
   2184.973,
   2309.128,
   2432.978,
   2559.529,
   2679.227,
   2781.166,
   2885.901};
   Double_t Graph0_fy1017[22] = {
   14.04488,
   13.31209,
   12.74228,
   12.47319,
   12.45768,
   12.42532,
   12.41406,
   12.40136,
   12.38404,
   12.40092,
   12.38405,
   12.39958,
   12.40039,
   12.36227,
   12.32577,
   12.32139,
   12.30252,
   12.27864,
   12.32989,
   12.4945,
   12.78573,
   21.28022};
   Double_t Graph0_fex1017[22] = {
   0.1727402,
   0.08564447,
   0.05750668,
   0.03900971,
   0.03131764,
   0.02823439,
   0.02680342,
   0.02592069,
   0.02627859,
   0.0263654,
   0.02833862,
   0.02976529,
   0.03340781,
   0.03661848,
   0.04175349,
   0.04603796,
   0.05317634,
   0.06379139,
   0.07674565,
   0.08753628,
   0.1746818,
   1.164882};
   Double_t Graph0_fey1017[22] = {
   0.2814611,
   0.02660195,
   0.01464268,
   0.009770429,
   0.007699624,
   0.006863289,
   0.006545372,
   0.006341025,
   0.006354288,
   0.006442631,
   0.006870104,
   0.007266116,
   0.00811152,
   0.00890217,
   0.01008024,
   0.01116079,
   0.01283842,
   0.01542781,
   0.01858163,
   0.02275876,
   0.06222228,
   1.895792};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1017,Graph0_fy1017,Graph0_fex1017,Graph0_fey1017);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01017 = new TH1F("Graph_Graph01017","S12",100,115.1073,3139.062);
   Graph_Graph01017->SetMinimum(11.17193);
   Graph_Graph01017->SetMaximum(24.26729);
   Graph_Graph01017->SetDirectory(0);
   Graph_Graph01017->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01017->SetLineColor(ci);
   Graph_Graph01017->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01017->GetXaxis()->SetRange(21,79);
   Graph_Graph01017->GetXaxis()->CenterTitle(true);
   Graph_Graph01017->GetXaxis()->SetLabelFont(42);
   Graph_Graph01017->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01017->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01017->GetXaxis()->SetTitleFont(42);
   Graph_Graph01017->GetYaxis()->SetTitle("#sigma_{y} [mm] / 125 MeV");
   Graph_Graph01017->GetYaxis()->CenterTitle(true);
   Graph_Graph01017->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01017->GetYaxis()->SetLabelFont(42);
   Graph_Graph01017->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01017->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01017->GetYaxis()->SetTitleFont(42);
   Graph_Graph01017->GetZaxis()->SetLabelFont(42);
   Graph_Graph01017->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01017->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01017);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
