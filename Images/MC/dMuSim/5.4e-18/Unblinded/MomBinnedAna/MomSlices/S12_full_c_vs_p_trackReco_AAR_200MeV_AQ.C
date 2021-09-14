void S12_full_c_vs_p_trackReco_AAR_200MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Sep 12 20:09:36 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-420.75,-4.375598,3456.75,0.8644547);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1073[15] = {
   100,
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
   Double_t Graph0_fy1073[15] = {
   -1.687312,
   -3.394777,
   -1.696975,
   -0.7209338,
   -0.5020155,
   -0.3058453,
   -0.295529,
   -0.2142557,
   -0.1837592,
   -0.1387397,
   -0.1681239,
   -0.1551792,
   -0.1151345,
   -0.1039178,
   -0.03835104};
   Double_t Graph0_fex1073[15] = {
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
   100,
   100};
   Double_t Graph0_fey1073[15] = {
   0.8495785,
   0.1074793,
   0.03416297,
   0.02552027,
   0.02236096,
   0.02065044,
   0.01926012,
   0.01822033,
   0.01762053,
   0.01763118,
   0.01803158,
   0.01913659,
   0.0208501,
   0.02148042,
   0.02946354};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1073,Graph0_fy1073,Graph0_fex1073,Graph0_fey1073);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01073 = new TH1F("Graph_Graph01073","S12",100,0,3300);
   Graph_Graph01073->SetMinimum(-3.851593);
   Graph_Graph01073->SetMaximum(0.3404494);
   Graph_Graph01073->SetDirectory(0);
   Graph_Graph01073->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01073->SetLineColor(ci);
   Graph_Graph01073->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01073->GetXaxis()->SetRange(0,93);
   Graph_Graph01073->GetXaxis()->CenterTitle(true);
   Graph_Graph01073->GetXaxis()->SetLabelFont(42);
   Graph_Graph01073->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01073->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01073->GetXaxis()->SetTitleFont(42);
   Graph_Graph01073->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01073->GetYaxis()->CenterTitle(true);
   Graph_Graph01073->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01073->GetYaxis()->SetLabelFont(42);
   Graph_Graph01073->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01073->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01073->GetYaxis()->SetTitleFont(42);
   Graph_Graph01073->GetZaxis()->SetLabelFont(42);
   Graph_Graph01073->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01073->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01073);
   
   gre->Draw("ap");
   
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
