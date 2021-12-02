void S12_c_vs_p_Run-1d_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Dec  1 15:15:22 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.8825,-0.9010275,2727.342,0.004767307);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1017[22] = {
   367.2434,
   456.6615,
   570.2449,
   695.0723,
   815.9921,
   938.5616,
   1062.66,
   1188.29,
   1312.784,
   1435.901,
   1561.976,
   1685.265,
   1810.607,
   1935.134,
   2060.292,
   2185.028,
   2309.148,
   2432.963,
   2559.53,
   2679.191,
   2781.14,
   2886.432};
   Double_t Graph0_fy1017[22] = {
   8.119932,
   2.024368,
   1.533027,
   -0.7540899,
   -0.4482178,
   -0.06956509,
   -0.7982489,
   -0.7845719,
   -0.9031497,
   -0.7945398,
   -0.5649851,
   -0.3901268,
   -0.327097,
   -0.2513036,
   -0.2823399,
   -0.2151568,
   -0.2046895,
   -0.1735433,
   -0.06721579,
   0.04376534,
   0.117268,
   -0.2489337};
   Double_t Graph0_fex1017[22] = {
   0.1560282,
   0.07840967,
   0.05265271,
   0.03561509,
   0.02855406,
   0.02572918,
   0.02439917,
   0.02356317,
   0.02386365,
   0.0239283,
   0.02569708,
   0.02696504,
   0.03024491,
   0.03312442,
   0.037755,
   0.04159103,
   0.04798117,
   0.05761162,
   0.06909077,
   0.07878472,
   0.1575697,
   0.9491119};
   Double_t Graph0_fey1017[22] = {
   0.8988193,
   0.08135476,
   0.03979809,
   0.02374873,
   0.01630769,
   0.01338359,
   0.01177737,
   0.01062055,
   0.009949655,
   0.009391716,
   0.009400383,
   0.009080718,
   0.009402963,
   0.009483795,
   0.009950484,
   0.01011922,
   0.0106968,
   0.01167227,
   0.01269417,
   0.01399747,
   0.0346377,
   0.2577769};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1017,Graph0_fy1017,Graph0_fex1017,Graph0_fey1017);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01017 = new TH1F("Graph_Graph01017","S12",100,115.0581,3139.41);
   Graph_Graph01017->SetMinimum(-0.810448);
   Graph_Graph01017->SetMaximum(-0.08581218);
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
   Graph_Graph01017->GetYaxis()->SetTitle("c [mrad] / 125 MeV");
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
