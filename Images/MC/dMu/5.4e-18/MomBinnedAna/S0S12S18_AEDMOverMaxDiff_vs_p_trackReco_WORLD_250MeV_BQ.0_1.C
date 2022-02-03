void S0S12S18_AEDMOverMaxDiff_vs_p_trackReco_WORLD_250MeV_BQ.0_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Feb  2 11:32:15 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.7269,-0.002450229,3408.028,0.003141251);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1218[11] = {
   451.7528,
   653.2209,
   880.2011,
   1123.089,
   1371.096,
   1620.209,
   1867.233,
   2115.524,
   2362.844,
   2614.57,
   2788.405};
   Double_t Graph0_fy1218[11] = {
   -0.000466627,
   -0.0003560684,
   -0.0009882982,
   -0.001136159,
   -0.001538434,
   -0.001295526,
   -0.001662313,
   -0.001555982,
   -0.001203765,
   -0.002385303,
   -0.001082595};
   Double_t Graph0_fex1218[11] = {
   0.1496284,
   0.1259009,
   0.09125919,
   0.08909967,
   0.09510246,
   0.1053006,
   0.1224209,
   0.1517068,
   0.1946282,
   0.240002,
   0.2929211};
   Double_t Graph0_fey1218[11] = {
   -0.001106988,
   -0.0004286908,
   -0.0003061552,
   -0.0002974312,
   -0.0002988942,
   -0.0003273932,
   -0.0004014282,
   -0.0004374715,
   -0.0005436721,
   -0.000780916,
   -0.002678481};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1218,Graph0_fy1218,Graph0_fex1218,Graph0_fey1218);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01218 = new TH1F("Graph_Graph01218","S0S12S18_",100,217.8937,3022.407);
   Graph_Graph01218->SetMinimum(-0.001891081);
   Graph_Graph01218->SetMaximum(0.002582103);
   Graph_Graph01218->SetDirectory(0);
   Graph_Graph01218->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01218->SetLineColor(ci);
   Graph_Graph01218->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01218->GetXaxis()->SetRange(0,101);
   Graph_Graph01218->GetXaxis()->CenterTitle(true);
   Graph_Graph01218->GetXaxis()->SetLabelFont(42);
   Graph_Graph01218->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01218->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01218->GetXaxis()->SetTitleFont(42);
   Graph_Graph01218->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 250 MeV");
   Graph_Graph01218->GetYaxis()->CenterTitle(true);
   Graph_Graph01218->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01218->GetYaxis()->SetLabelFont(42);
   Graph_Graph01218->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01218->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01218->GetYaxis()->SetTitleFont(42);
   Graph_Graph01218->GetZaxis()->SetLabelFont(42);
   Graph_Graph01218->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01218->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01218);
   
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
