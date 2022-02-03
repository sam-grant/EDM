void S0_AEDMOverMaxDiff_vs_p_trackReco_WORLD_250MeV_BQ.0_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Feb  2 11:31:59 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-168.7171,-0.005072687,3409.979,0.02718933);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1070[11] = {
   451.3795,
   653.2084,
   880.0107,
   1122.885,
   1371.272,
   1620.698,
   1868.122,
   2116.398,
   2362.901,
   2615.842,
   2789.677};
   Double_t Graph0_fy1070[11] = {
   -0.0002462628,
   -0.0005160028,
   -0.001405479,
   -0.001996648,
   -0.002227556,
   -0.001373814,
   -0.001886015,
   -0.001832504,
   -0.001297777,
   -0.002331991,
   0.004084786};
   Double_t Graph0_fex1070[11] = {
   0.2570146,
   0.2168445,
   0.1578235,
   0.1543579,
   0.1647142,
   0.1816809,
   0.208312,
   0.2527105,
   0.3151618,
   0.3975541,
   0.4627629};
   Double_t Graph0_fey1070[11] = {
   -0.00194863,
   -0.0007575299,
   -0.0005384271,
   -0.0005338804,
   -0.0005499292,
   -0.0005676368,
   -0.0007262282,
   -0.0008838417,
   -0.0009095235,
   -0.001392118,
   0.004181681};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1070,Graph0_fy1070,Graph0_fex1070,Graph0_fey1070);
   gre->SetName("Graph0");
   gre->SetTitle("S0_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01070 = new TH1F("Graph_Graph01070","S0_",100,217.2208,3024.042);
   Graph_Graph01070->SetMinimum(-0.001846485);
   Graph_Graph01070->SetMaximum(0.02396313);
   Graph_Graph01070->SetDirectory(0);
   Graph_Graph01070->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01070->SetLineColor(ci);
   Graph_Graph01070->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01070->GetXaxis()->SetRange(0,101);
   Graph_Graph01070->GetXaxis()->CenterTitle(true);
   Graph_Graph01070->GetXaxis()->SetLabelFont(42);
   Graph_Graph01070->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01070->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01070->GetXaxis()->SetTitleFont(42);
   Graph_Graph01070->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 250 MeV");
   Graph_Graph01070->GetYaxis()->CenterTitle(true);
   Graph_Graph01070->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01070->GetYaxis()->SetLabelFont(42);
   Graph_Graph01070->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01070->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01070->GetYaxis()->SetTitleFont(42);
   Graph_Graph01070->GetZaxis()->SetLabelFont(42);
   Graph_Graph01070->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01070->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01070);
   
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
